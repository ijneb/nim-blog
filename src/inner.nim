import
  htmlgen,
  markdown,
  strutils,
  os,
  times,
  uri
include db

proc header(): string {.compileTime.} =
  head(
    title("Benjamin Frady"),
    link(rel="icon", href="/favicon.png"),
    link(rel="stylesheet", type="text/css", href="/css/style.css"),
    meta(name="viewport", content="width=device-width,height=device-height,initial-scale=1.0"),
    meta(name="author", content="Benjamin Frady")
  )

proc top(): string {.compileTime.} =
  `div`(id="right",
    a(href="/",
      img(src="/images/frady.png", alt="", height="84")
    ),
    hr(),
    `div`(id="nav",
      ul(
        li(a(href="/list", "All Posts")),
        li(a(href="/links", "Find Me"))
      )
    )
  )

proc index(): string =
  var
    recentList: seq[Post] = recentPosts()
    recentString: string
  if len(recentList) == 0:
    recentString = li("Nothing here yet!")
  else:
    for p in recentList:
      recentString &= li(span(class="timestamp", p.date) & " " & a(href = "/blog/" & $(p.id), p.title))
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left",
          h1("About"),
          p(
            "This is the website of Benjamin Frady. My interests include designing software, woodworking, and fiddling with music."
          ),
          h1("Recent Posts"),
          ul(recentString),
          h1("Contact"),
          p(
            "Feel free to ",
            a(href="mailto:benjamin@frady.org", "shoot me an email"),
            "."
          )
        )
      )
    )
  )

proc error(msg: string): string {.compileTime.} =
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left", h1(msg))
      )
    )
  )

proc list(): string =
  var
    allPosts: seq[Post] = getPosts()
    postsString: string
  if len(allPosts) == 0:
    postsString = li("Nothing here yet!")
  else:
    for p in allPosts:
      postsString &= li(span(class="timestamp", p.date) & " " & a(href = "/blog/" & $(p.id), p.title))
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left",
          i("You can browse by tags ", a(href="/tag", "here", ".")),
          h1("All Posts"),
          ul(postsString)
        )
      )
    )
  )

proc blog(post: int): string =
  let
    p: Post = findPost(post)
    tags = getPostTags(post)
            .map(proc (tag: string): string = a(href="/tag/" & encodeUrl(tag), tag))
    tags_csv = if len(tags) > 0: tags.join(", ") else: "none"
  if p.title != "":
    result =
      "<!DOCTYPE html>" &
      html(
        header(),
        body(lang="en",
          `div`(id="content",
            top(),
            `div`(id="left",
              `div`(id="post",
                `div`(id="post-title", p.title),
                `div`(id="post-info",
                  `div`(class="tags", "tag(s): ", i(tags_csv)),
                  span(class="date", "created: ", i(p.date))
                ),
                p.post
              )
            )
          )
        )
      )
  else: result = error("Page not found")

proc tag(name: string): string =
  var
    taggedString: string
  let
    taggedPosts: seq[int] = getPostsWithTag(name)
  if len(taggedPosts) == 0:
    taggedString = li("Tag not found")
  else:
    for pid in taggedPosts:
      let
        p = findPost(pid)
      taggedString &= li(span(class="timestamp", p.date) & " " & a(href = "/blog/" & $(p.id), p.title))
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left",
          h1("Tag: " & capitalizeAscii(name)),
          ul(taggedString)
        )
      )
    )
  )

proc tagList(): string =
  let
    tags = getAllTags()
  var
    tagsString: string
  for tag in tags:
    tagsString &= li(a(href = "/tag/" & tag, capitalizeAscii(tag)))
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left",
          h1("Tags"),
          ul(tagsString)
        )
      )
    )
  )

proc links(): string {.compileTime.} =
  "<!DOCTYPE html>" &
  html(
    header(),
    body(lang="en",
      `div`(id="content",
        top(),
        `div`(id="left",
          h1("Personal Links"),
          ul(
            li(
              a(href="https://last.fm/user/benji_is_me",
                img(src="/icons/last-dot-fm.svg", alt="", width="16px", class="icon"),
                "Last.fm"
              )
            ),
            li(
              a(href="https://linkedin.com/in/benjamin-frady",
                img(src="/icons/linkedin.svg", alt="", width="16px", class="icon"),
                "LinkedIn"
              )
            ),
            li(
              a(href="https://news.ycombinator.com/user?id=benji_is_me",
                img(src="/icons/ycombinator.svg", alt="", width="16px", class="icon"),
                "HackerNews"
              )
            ),
            li(
              a(href="https://github.com/benjif",
                img(src="/icons/github.svg", alt="", width="16px", class="icon"),
                "GitHub"
              )
            ),
            li(
              a(href="https://git.frady.org/",
                img(src="/icons/git.svg", alt="", width="16px", class="icon"),
                "Self-hosted Git"
              )
            )
          )
        )
      )
    )
  )
