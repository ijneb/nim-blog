/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benji/.nim/lib -o /home/benji/dev/nim/website/src/nimcache/stdlib_net.c.o /home/benji/dev/nim/website/src/nimcache/stdlib_net.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef struct tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR tyArray_QQGLPNVVwLhYjkngqAxXQQ[4001];
struct tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ {
int fd;
NIM_BOOL isBuffered;
union{
struct {tyArray_QQGLPNVVwLhYjkngqAxXQQ buffer;
NI currPos;
NI bufLen;
} S1;
} isBufferedU;
NI32 lastError;
tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain;
tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType;
tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ;
typedef NU8 tyArray_cdsir9aPB24hAk6k77P9b9bCA[8];
typedef NU8 tySet_tyEnum_SocketFlag_4xio0cAXR7XG4pF9bVcpxEg;
typedef NU8 tyEnum_SocketFlag_4xio0cAXR7XG4pF9bVcpxEg;
typedef NIM_CHAR tyArray_NSMq3FMCIrS8gSbyinBZ8w[14];
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket_BcG9aGQhTam9ajUKte8LeMdQ)(tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError_bEwAamo1N7TKcaU9akpiyIg)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError_tNPXXFl9cb3BG0pJKzUn9bew)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*, newSocket_lbxW9clwmmihoC7iJrR1bMg)(int fd, tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL buffered);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_NIMCALL(void, Marker_tyRef_MkGXUPMSENeRDS7EppfLgA)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(void, setSockOptInt_AD4OLBf5FHlJkAgq7B9aY5A)(int socket, NI level, NI optname, NI optval);
N_LIB_PRIVATE N_NIMCALL(int, toCInt_giy119a5LXErbSf7U1OXa5w)(tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ opt);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(short, toInt_OxnVJkB3zYuSbbBvLQDSVA)(tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain);
N_LIB_PRIVATE N_NIMCALL(NU16, ntohs_hTWZ9cGeQnQNEThS6k8qUKg)(NU16 x);
N_LIB_PRIVATE N_NIMCALL(NU32, ntohl_RStKcIp64i7w9c4KBI2z46w)(NU32 x);
N_LIB_PRIVATE N_NIMCALL(int, bindAddr_zpvqU0KQkzbkoKaehnMX2A)(int socket, struct sockaddr* name, socklen_t namelen);
N_LIB_PRIVATE N_NIMCALL(struct addrinfo*, getAddrInfo_fNPnGAYqSzdc2OjHEcTTAw)(NimStringDesc* address, NU16 port, tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol);
N_LIB_PRIVATE N_NIMCALL(int, listen_BNAD35QpM7R1C7EJRtAZ3Q)(int socket, int backlog);
extern int osInvalidSocket_voz9aUXu8jtRbvGZZJHNE8w;
TNimType NTI_aIhANOOoETolVz9cccNO9cRQ_;
extern TNimType NTI_nlCscttRCss70IBTyuBqnA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_QQGLPNVVwLhYjkngqAxXQQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_sVg18TP9cLifHyygRe9cro9aA_;
extern TNimType NTI_Q79bEtFARvq0ekDNtvj3Vqg_;
extern TNimType NTI_NQT1bItGG2X9byGdrWX7ujw_;
extern TNimType NTI_dqJ1OqRGclxIMMdSLRzzXg_;
TNimType NTI_MkGXUPMSENeRDS7EppfLgA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_XqsrSBxhOTPgLQ9cX4MmV4A_2, "", 0);
STRING_LITERAL(TM_XqsrSBxhOTPgLQ9cX4MmV4A_3, "\012not (fd == osInvalidSocket) ", 29);
TNimNode* NimDT__aIhANOOoETolVz9cccNO9cRQ_isBuffered[3];
STRING_LITERAL(TM_XqsrSBxhOTPgLQ9cX4MmV4A_6, "currPos", 7);
static N_NIMCALL(void, Marker_tyRef_MkGXUPMSENeRDS7EppfLgA)(void* p, NI op) {
	tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* a;
	NI T1_;
	a = (tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*)p;
	switch ((*a).isBuffered) {
	case NIM_TRUE:
	T1_ = (NI)0;
	break;
	case NIM_FALSE:
	break;
	} 
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*, newSocket_lbxW9clwmmihoC7iJrR1bMg)(int fd, tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL buffered) {
	tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* result;
	tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* T5_;
	nimfr_("newSocket", "net.nim");
	result = (tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*)0;
	nimln_(200, "net.nim");
	{
		if (!!(!((fd == osInvalidSocket_voz9aUXu8jtRbvGZZJHNE8w)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_3));
	}
	LA3_: ;
	nimln_(201, "net.nim");
	T5_ = (tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*)0;
	T5_ = (tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*) newObj((&NTI_MkGXUPMSENeRDS7EppfLgA_), sizeof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ));
	(*T5_).fd = fd;
	(*T5_).isBuffered = buffered;
	(*T5_).domain = domain;
	(*T5_).sockType = sockType;
	(*T5_).protocol = protocol;
	result = T5_;
	nimln_(207, "net.nim");
	{
		if (!buffered) goto LA8_;
		if (!(((2 &(1U<<((NU)((*result).isBuffered)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_6));
		nimln_(208, "net.nim");
		(*result).isBufferedU.S1.currPos = ((NI) 0);
	}
	LA8_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*, newSocket_8Lrat9ciQTaGiwISp8ak13A)(tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL buffered) {
	tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* result;
	int fd;
	nimfr_("newSocket", "net.nim");
	result = (tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*)0;
	nimln_(229, "net.nim");
	fd = createNativeSocket_BcG9aGQhTam9ajUKte8LeMdQ(domain, sockType, protocol);
	nimln_(230, "net.nim");
	{
		NI32 T5_;
		if (!(fd == osInvalidSocket_voz9aUXu8jtRbvGZZJHNE8w)) goto LA3_;
		nimln_(231, "net.nim");
		T5_ = (NI32)0;
		T5_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T5_, ((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_2));
	}
	LA3_: ;
	nimln_(232, "net.nim");
	result = newSocket_lbxW9clwmmihoC7iJrR1bMg(fd, domain, sockType, protocol, buffered);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(int, toCInt_giy119a5LXErbSf7U1OXa5w)(tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ opt) {
	int result;
	nimfr_("toCInt", "net.nim");
	result = (int)0;
	nimln_(922, "net.nim");
	nimln_(923, "net.nim");
	switch (opt) {
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 0):
	{
		result = ((int) 30);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 1):
	{
		result = ((int) 6);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 2):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 3):
	{
		result = ((int) 5);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 4):
	{
		result = ((int) 9);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 5):
	{
		result = ((int) 10);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 6):
	{
		result = ((int) 2);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 7):
	{
		result = ((int) 15);
	}
	break;
	case ((tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ) 8):
	{
		result = ((int) 1);
	}
	break;
	}
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, setSockOpt_CdTxaPiwLECOUKYBbpXCKQ)(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* socket, tyEnum_SOBool_SDlZUtKctfhvUZ58547HWQ opt, NIM_BOOL value, int level) {
	int valuei;
	NI T1_;
	int T7_;
	nimfr_("setSockOpt", "net.nim");
	nimln_(961, "net.nim");
	T1_ = (NI)0;
	{
		if (!value) goto LA4_;
		T1_ = ((NI) 1);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) 0);
	}
	LA2_: ;
	valuei = ((int)chckRange(T1_, ((int) (-2147483647 -1)), ((int) 2147483647)));
	nimln_(962, "net.nim");
	T7_ = (int)0;
	T7_ = toCInt_giy119a5LXErbSf7U1OXa5w(opt);
	setSockOptInt_AD4OLBf5FHlJkAgq7B9aY5A((*socket).fd, ((NI) (level)), ((NI) (T7_)), ((NI) (valuei)));
	popFrame();
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

N_LIB_PRIVATE N_NIMCALL(void, bindAddr_1QV2AFuvaMgMWnPRPZq9bVw)(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* socket, NU16 port, NimStringDesc* address) {
	nimfr_("bindAddr", "net.nim");
	nimln_(763, "net.nim");
	{
		struct sockaddr_in name;
		if (!(!(address) || (address)->Sup.len == 0)) goto LA3_;
		nimZeroMem((void*)(&name), sizeof(struct sockaddr_in));
		nimln_(768, "net.nim");
		name.sin_family = toInt_OxnVJkB3zYuSbbBvLQDSVA(((tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg) 2));
		nimln_(769, "net.nim");
		name.sin_port = ntohs_hTWZ9cGeQnQNEThS6k8qUKg(port);
		nimln_(770, "net.nim");
		name.sin_addr.s_addr = ntohl_RStKcIp64i7w9c4KBI2z46w(((NU32) 0));
		nimln_(771, "net.nim");
		{
			int T7_;
			NI32 T10_;
			nimln_(772, "net.nim");
			nimln_(771, "net.nim");
			nimln_(772, "net.nim");
			T7_ = (int)0;
			T7_ = bindAddr_zpvqU0KQkzbkoKaehnMX2A((*socket).fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(T7_ < ((NI32) 0))) goto LA8_;
			nimln_(773, "net.nim");
			T10_ = (NI32)0;
			T10_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
			raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T10_, ((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_2));
		}
		LA8_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		struct addrinfo* aiList;
		nimln_(775, "net.nim");
		aiList = getAddrInfo_fNPnGAYqSzdc2OjHEcTTAw(address, port, (*socket).domain, ((tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw) 1), ((tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg) 6));
		nimln_(776, "net.nim");
		{
			int T14_;
			NI32 T17_;
			T14_ = (int)0;
			T14_ = bindAddr_zpvqU0KQkzbkoKaehnMX2A((*socket).fd, (*aiList).ai_addr, (*aiList).ai_addrlen);
			if (!(T14_ < ((NI32) 0))) goto LA15_;
			nimln_(777, "net.nim");
			freeaddrinfo(aiList);
			nimln_(778, "net.nim");
			T17_ = (NI32)0;
			T17_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
			raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T17_, ((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_2));
		}
		LA15_: ;
		nimln_(779, "net.nim");
		freeaddrinfo(aiList);
	}
	LA1_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, listen_AOBVJUkpcJ1PzOE7Ql9b9ckQ)(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* socket, int backlog) {
	nimfr_("listen", "net.nim");
	nimln_(754, "net.nim");
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = listen_BNAD35QpM7R1C7EJRtAZ3Q((*socket).fd, backlog);
		if (!(T3_ < ((NI32) 0))) goto LA4_;
		nimln_(755, "net.nim");
		T6_ = (NI32)0;
		T6_ = osLastError_tNPXXFl9cb3BG0pJKzUn9bew();
		raiseOSError_bEwAamo1N7TKcaU9akpiyIg(T6_, ((NimStringDesc*) &TM_XqsrSBxhOTPgLQ9cX4MmV4A_2));
	}
	LA4_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(int, getFd_bR6ZV9aJ9a3QZrVB8dOrnRHg)(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* socket) {
	int result;
	nimfr_("getFd", "net.nim");
{	result = (int)0;
	nimln_(1454, "net.nim");
	result = (*socket).fd;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDisconnectionError_40p9aaw5rEmIprdUBGKsyYQ)(tySet_tyEnum_SocketFlag_4xio0cAXR7XG4pF9bVcpxEg flags, NI32 lastError) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isDisconnectionError", "net.nim");
	result = (NIM_BOOL)0;
	nimln_(178, "net.nim");
	nimln_(185, "net.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = ((flags &(1U<<((NU)(((tyEnum_SocketFlag_4xio0cAXR7XG4pF9bVcpxEg) 1))&7U)))!=0);
	if (!(T1_)) goto LA2_;
	nimln_(186, "net.nim");
	T1_ = (lastError == ((NI) 104) || lastError == ((NI) 32) || lastError == ((NI) 102));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_netInit000)(void) {
	nimfr_("net", "net.nim");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_netDatInit000)(void) {
static TNimNode* TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[6];
static TNimNode* TM_XqsrSBxhOTPgLQ9cX4MmV4A_5[3];
static TNimNode TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[12];
NTI_aIhANOOoETolVz9cccNO9cRQ_.size = sizeof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ);
NTI_aIhANOOoETolVz9cccNO9cRQ_.kind = 18;
NTI_aIhANOOoETolVz9cccNO9cRQ_.base = 0;
NTI_aIhANOOoETolVz9cccNO9cRQ_.flags = 3;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[0] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[1];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[1].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[1].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, fd);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[1].typ = (&NTI_nlCscttRCss70IBTyuBqnA_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[1].name = "fd";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[1] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].kind = 3;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, isBuffered);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].name = "isBuffered";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].sons = &NimDT__aIhANOOoETolVz9cccNO9cRQ_isBuffered[0];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[2].len = 2;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_5[0] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[4];
NTI_QQGLPNVVwLhYjkngqAxXQQ_.size = sizeof(tyArray_QQGLPNVVwLhYjkngqAxXQQ);
NTI_QQGLPNVVwLhYjkngqAxXQQ_.kind = 16;
NTI_QQGLPNVVwLhYjkngqAxXQQ_.base = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
NTI_QQGLPNVVwLhYjkngqAxXQQ_.flags = 3;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[4].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[4].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, isBufferedU.S1.buffer);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[4].typ = (&NTI_QQGLPNVVwLhYjkngqAxXQQ_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[4].name = "buffer";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_5[1] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[5];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[5].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[5].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, isBufferedU.S1.currPos);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[5].name = "currPos";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_5[2] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[6];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[6].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[6].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, isBufferedU.S1.bufLen);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[6].name = "bufLen";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[3].len = 3; TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[3].kind = 2; TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[3].sons = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_5[0];
NimDT__aIhANOOoETolVz9cccNO9cRQ_isBuffered[1] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[3];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[7].len = 0; TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[7].kind = 2;
NimDT__aIhANOOoETolVz9cccNO9cRQ_isBuffered[0] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[7];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[2] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[8];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[8].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[8].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, lastError);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[8].typ = (&NTI_sVg18TP9cLifHyygRe9cro9aA_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[8].name = "lastError";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[3] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[9];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[9].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[9].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, domain);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[9].typ = (&NTI_Q79bEtFARvq0ekDNtvj3Vqg_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[9].name = "domain";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[4] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[10];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[10].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[10].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, sockType);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[10].typ = (&NTI_NQT1bItGG2X9byGdrWX7ujw_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[10].name = "sockType";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[5] = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[11];
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[11].kind = 1;
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[11].offset = offsetof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ, protocol);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[11].typ = (&NTI_dqJ1OqRGclxIMMdSLRzzXg_);
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[11].name = "protocol";
TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[0].len = 6; TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[0].kind = 2; TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[0].sons = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_4[0];
NTI_aIhANOOoETolVz9cccNO9cRQ_.node = &TM_XqsrSBxhOTPgLQ9cX4MmV4A_0[0];
NTI_MkGXUPMSENeRDS7EppfLgA_.size = sizeof(tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ*);
NTI_MkGXUPMSENeRDS7EppfLgA_.kind = 22;
NTI_MkGXUPMSENeRDS7EppfLgA_.base = (&NTI_aIhANOOoETolVz9cccNO9cRQ_);
NTI_MkGXUPMSENeRDS7EppfLgA_.flags = 2;
NTI_MkGXUPMSENeRDS7EppfLgA_.marker = Marker_tyRef_MkGXUPMSENeRDS7EppfLgA;
}

