/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benji/.nim/lib -o /home/benji/dev/nim/website/src/nimcache/stdlib_db_common.c.o /home/benji/dev/nim/website/src/nimcache/stdlib_db_common.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_DbError_w65gHFDlremRAyGJ4f6zkA tyObject_DbError_w65gHFDlremRAyGJ4f6zkA;
typedef struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ;
typedef struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
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
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raise_id;
Exception* up;
};
struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg {
  Exception Sup;
};
struct tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ {
  tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
};
struct tyObject_DbError_w65gHFDlremRAyGJ4f6zkA {
  tyObject_IOError_9czoZw3pzPyrBmb5zTHY1OQ Sup;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_HDK9arR7eW5QkLI9bRSdsGnA)(void* p, NI op);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
TNimType NTI_w65gHFDlremRAyGJ4f6zkA_;
TNimType NTI_HDK9arR7eW5QkLI9bRSdsGnA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static N_NIMCALL(void, Marker_tyRef_HDK9arR7eW5QkLI9bRSdsGnA)(void* p, NI op) {
	tyObject_DbError_w65gHFDlremRAyGJ4f6zkA* a;
	a = (tyObject_DbError_w65gHFDlremRAyGJ4f6zkA*)p;
	nimGCvisit((void*)(*a).Sup.Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.up, op);
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
N_LIB_PRIVATE N_NIMCALL(void, stdlib_db_commonInit000)(void) {
	nimfr_("db_common", "db_common.nim");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_db_commonDatInit000)(void) {
static TNimNode TM_roPg9aXsZrBZMcw9a0dVfzaQ_0[1];
NTI_w65gHFDlremRAyGJ4f6zkA_.size = sizeof(tyObject_DbError_w65gHFDlremRAyGJ4f6zkA);
NTI_w65gHFDlremRAyGJ4f6zkA_.kind = 17;
NTI_w65gHFDlremRAyGJ4f6zkA_.base = (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_);
TM_roPg9aXsZrBZMcw9a0dVfzaQ_0[0].len = 0; TM_roPg9aXsZrBZMcw9a0dVfzaQ_0[0].kind = 2;
NTI_w65gHFDlremRAyGJ4f6zkA_.node = &TM_roPg9aXsZrBZMcw9a0dVfzaQ_0[0];
NTI_HDK9arR7eW5QkLI9bRSdsGnA_.size = sizeof(tyObject_DbError_w65gHFDlremRAyGJ4f6zkA*);
NTI_HDK9arR7eW5QkLI9bRSdsGnA_.kind = 22;
NTI_HDK9arR7eW5QkLI9bRSdsGnA_.base = (&NTI_w65gHFDlremRAyGJ4f6zkA_);
NTI_HDK9arR7eW5QkLI9bRSdsGnA_.marker = Marker_tyRef_HDK9arR7eW5QkLI9bRSdsGnA;
}

