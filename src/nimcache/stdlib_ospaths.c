/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benji/.nim/lib -o /home/benji/dev/nim/website/src/nimcache/stdlib_ospaths.c.o /home/benji/dev/nim/website/src/nimcache/stdlib_ospaths.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
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
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg tyTuple_7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyObject_OSError_3XwRQvmzCEOC4QnT706q1g tyObject_OSError_3XwRQvmzCEOC4QnT706q1g;
typedef struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple_7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct RootObj {
TNimType* m_type;
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
struct tyObject_OSError_3XwRQvmzCEOC4QnT706q1g {
  tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
NI32 errorCode;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op);
static N_NIMCALL(void, TM_jvWQYw9bcuYhftfPX2ynPeg_2)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(NI, findEnvVar_OdjDnFMcplzhh1VlKmvieg)(NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(void, getEnvVarsC_6FJHJTe87BjacqZFrlJfgw)(void);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths)(NCSTRING x, NCSTRING y);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg_yWvWz5V6Ib7QshcAbOiDeQ)(NI32 errorCode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
NIM_BOOL envComputed_OC1kQm9aRvX8VnmaXglp57Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* environment_rnCB7Cc69bd2mlM49cn9czO2Q;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern NCSTRING* environ;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_7q7q3E6Oj24ZNVJb9aonhAg_;
extern TNimType NTI_Qx9aKy4vZ9bVz9bnG9brQcRHGA_;
extern TNimType NTI_3XwRQvmzCEOC4QnT706q1g_;
STRING_LITERAL(TM_jvWQYw9bcuYhftfPX2ynPeg_9, "", 0);
STRING_LITERAL(TM_jvWQYw9bcuYhftfPX2ynPeg_16, "\012Additional info: \'", 19);
STRING_LITERAL(TM_jvWQYw9bcuYhftfPX2ynPeg_17, "\'", 1);
STRING_LITERAL(TM_jvWQYw9bcuYhftfPX2ynPeg_18, "unknown OS error", 16);
static N_NIMCALL(void, Marker_tySequence_sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op) {
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* a;
	NI T1_;
	a = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, TM_jvWQYw9bcuYhftfPX2ynPeg_2)(void) {
	nimGCvisit((void*)environment_rnCB7Cc69bd2mlM49cn9czO2Q, 0);
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

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		nimln_(185, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln_(252, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	nimfr_("==", "system.nim");
	result = (NIM_BOOL)0;
	nimln_(4053, "system.nim");
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		nimln_(4054, "system.nim");
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		nimln_(4055, "system.nim");
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, getEnvVarsC_6FJHJTe87BjacqZFrlJfgw)(void) {
	nimfr_("getEnvVarsC", "osenv.nim");
	nimln_(79, "osenv.nim");
	{
		NI i;
		if (!!(envComputed_OC1kQm9aRvX8VnmaXglp57Q)) goto LA3_;
		nimln_(80, "osenv.nim");
		if (environment_rnCB7Cc69bd2mlM49cn9czO2Q) { nimGCunrefNoCycle(environment_rnCB7Cc69bd2mlM49cn9czO2Q); environment_rnCB7Cc69bd2mlM49cn9czO2Q = NIM_NIL; }
		environment_rnCB7Cc69bd2mlM49cn9czO2Q = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) newSeqRC1((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
		nimln_(83, "osenv.nim");
		i = ((NI) 0);
		{
			nimln_(84, "osenv.nim");
			while (1) {
				NimStringDesc* T12_;
				NI T13_;
				NimStringDesc* T14_;
				NI TM_jvWQYw9bcuYhftfPX2ynPeg_3;
				nimln_(85, "osenv.nim");
				{
					NIM_BOOL T9_;
					T9_ = (NIM_BOOL)0;
					T9_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths(environ[(i)- 0], NIM_NIL);
					if (!T9_) goto LA10_;
					goto LA5;
				}
				LA10_: ;
				nimln_(86, "osenv.nim");
				T12_ = (NimStringDesc*)0;
				T12_ = cstrToNimstr(environ[(i)- 0]);
				environment_rnCB7Cc69bd2mlM49cn9czO2Q = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3(&(environment_rnCB7Cc69bd2mlM49cn9czO2Q)->Sup, (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_));
				T13_ = environment_rnCB7Cc69bd2mlM49cn9czO2Q->Sup.len++;
				T14_ = (NimStringDesc*)0;
				T14_ = environment_rnCB7Cc69bd2mlM49cn9czO2Q->data[T13_]; environment_rnCB7Cc69bd2mlM49cn9czO2Q->data[T13_] = copyStringRC1(T12_);
				if (T14_) nimGCunrefNoCycle(T14_);
				nimln_(87, "osenv.nim");
				TM_jvWQYw9bcuYhftfPX2ynPeg_3 = addInt(i, ((NI) 1));
				i = (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_3);
			}
		} LA5: ;
		nimln_(88, "osenv.nim");
		envComputed_OC1kQm9aRvX8VnmaXglp57Q = NIM_TRUE;
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(NI, findEnvVar_OdjDnFMcplzhh1VlKmvieg)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* T1_;
	nimfr_("findEnvVar", "osenv.nim");
{	result = (NI)0;
	nimln_(91, "osenv.nim");
	getEnvVarsC_6FJHJTe87BjacqZFrlJfgw();
	nimln_(92, "osenv.nim");
	T1_ = (NimStringDesc*)0;
	T1_ = rawNewString((key ? key->Sup.len : 0) + 1);
appendString(T1_, key);
appendChar(T1_, 61);
	temp = T1_;
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(93, "osenv.nim");
		T3_ = (environment_rnCB7Cc69bd2mlM49cn9czO2Q ? (environment_rnCB7Cc69bd2mlM49cn9czO2Q->Sup.len-1) : -1);
		colontmp_ = T3_;
		nimln_(2023, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2024, "system.nim");
			while (1) {
				NI TM_jvWQYw9bcuYhftfPX2ynPeg_4;
				if (!(res <= colontmp_)) goto LA5;
				nimln_(2025, "system.nim");
				i = res;
				nimln_(94, "osenv.nim");
				{
					NIM_BOOL T8_;
					if (!environment_rnCB7Cc69bd2mlM49cn9czO2Q || (NU)(i) >= (NU)(environment_rnCB7Cc69bd2mlM49cn9czO2Q->Sup.len)) raiseIndexError();
					T8_ = (NIM_BOOL)0;
					T8_ = nsuStartsWith(environment_rnCB7Cc69bd2mlM49cn9czO2Q->data[i], temp);
					if (!T8_) goto LA9_;
					result = i;
					goto BeforeRet_;
				}
				LA9_: ;
				nimln_(2026, "system.nim");
				TM_jvWQYw9bcuYhftfPX2ynPeg_4 = addInt(res, ((NI) 1));
				res = (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_4);
			} LA5: ;
		}
	}
	nimln_(95, "osenv.nim");
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv_9b1nh9cAHhSLlHOPz8lCk5FA)(NimStringDesc* key, NimStringDesc* default_0) {
	NimStringDesc* result;
	NI i;
	nimfr_("getEnv", "osenv.nim");
{	result = (NimStringDesc*)0;
	nimln_(106, "osenv.nim");
	i = findEnvVar_OdjDnFMcplzhh1VlKmvieg(key);
	nimln_(107, "osenv.nim");
	{
		NI T5_;
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_5;
		if (!(((NI) 0) <= i)) goto LA3_;
		nimln_(108, "osenv.nim");
		if (!environment_rnCB7Cc69bd2mlM49cn9czO2Q || (NU)(i) >= (NU)(environment_rnCB7Cc69bd2mlM49cn9czO2Q->Sup.len)) raiseIndexError();
		if (!environment_rnCB7Cc69bd2mlM49cn9czO2Q || (NU)(i) >= (NU)(environment_rnCB7Cc69bd2mlM49cn9czO2Q->Sup.len)) raiseIndexError();
		T5_ = (NI)0;
		T5_ = nsuFindChar(environment_rnCB7Cc69bd2mlM49cn9czO2Q->data[i], 61, ((NI) 0), ((NI) 0));
		TM_jvWQYw9bcuYhftfPX2ynPeg_5 = addInt(T5_, ((NI) 1));
		result = copyStr(environment_rnCB7Cc69bd2mlM49cn9czO2Q->data[i], (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_5));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NCSTRING env;
		nimln_(110, "osenv.nim");
		env = getenv(nimToCStringConv(key));
		nimln_(111, "osenv.nim");
		{
			NIM_BOOL T9_;
			T9_ = (NIM_BOOL)0;
			T9_ = eqeq__9ccNWqrTIE9bcAqE2Q0ro7zgospaths(env, NIM_NIL);
			if (!T9_) goto LA10_;
			result = copyString(default_0);
			goto BeforeRet_;
		}
		LA10_: ;
		nimln_(112, "osenv.nim");
		result = cstrToNimstr(env);
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	nimfr_("joinPath", "ospaths.nim");
	result = (NimStringDesc*)0;
	nimln_(186, "ospaths.nim");
	{
		if (!((head ? head->Sup.len : 0) == ((NI) 0))) goto LA3_;
		nimln_(187, "ospaths.nim");
		result = copyString(tail);
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_6;
		nimln_(188, "ospaths.nim");
		TM_jvWQYw9bcuYhftfPX2ynPeg_6 = subInt((head ? head->Sup.len : 0), ((NI) 1));
		if (!head || (NU)((NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_6)) >= (NU)(head->Sup.len)) raiseIndexError();
		if (!(((NU8)(head->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_6)])) == ((NU8)(47)) || ((NU8)(head->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_6)])) == ((NU8)(47)))) goto LA6_;
		nimln_(189, "ospaths.nim");
		{
			NIM_BOOL T10_;
			NimStringDesc* T14_;
			NimStringDesc* T15_;
			T10_ = (NIM_BOOL)0;
			T10_ = (((NI) 0) < (tail ? tail->Sup.len : 0));
			if (!(T10_)) goto LA11_;
			if (!tail || (NU)(((NI) 0)) >= (NU)(tail->Sup.len)) raiseIndexError();
			T10_ = (((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)));
			LA11_: ;
			if (!T10_) goto LA12_;
			nimln_(190, "ospaths.nim");
			T14_ = (NimStringDesc*)0;
			T15_ = (NimStringDesc*)0;
			T15_ = copyStr(tail, ((NI) 1));
			T14_ = rawNewString((head ? head->Sup.len : 0) + (T15_ ? T15_->Sup.len : 0) + 0);
appendString(T14_, head);
appendString(T14_, T15_);
			result = T14_;
		}
		goto LA8_;
		LA12_: ;
		{
			NimStringDesc* T17_;
			nimln_(192, "ospaths.nim");
			T17_ = (NimStringDesc*)0;
			T17_ = rawNewString((head ? head->Sup.len : 0) + (tail ? tail->Sup.len : 0) + 0);
appendString(T17_, head);
appendString(T17_, tail);
			result = T17_;
		}
		LA8_: ;
	}
	goto LA1_;
	LA6_: ;
	{
		nimln_(194, "ospaths.nim");
		{
			NIM_BOOL T21_;
			NimStringDesc* T25_;
			T21_ = (NIM_BOOL)0;
			T21_ = (((NI) 0) < (tail ? tail->Sup.len : 0));
			if (!(T21_)) goto LA22_;
			if (!tail || (NU)(((NI) 0)) >= (NU)(tail->Sup.len)) raiseIndexError();
			T21_ = (((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)) || ((NU8)(tail->data[((NI) 0)])) == ((NU8)(47)));
			LA22_: ;
			if (!T21_) goto LA23_;
			nimln_(195, "ospaths.nim");
			T25_ = (NimStringDesc*)0;
			T25_ = rawNewString((head ? head->Sup.len : 0) + (tail ? tail->Sup.len : 0) + 0);
appendString(T25_, head);
appendString(T25_, tail);
			result = T25_;
		}
		goto LA19_;
		LA23_: ;
		{
			NimStringDesc* T27_;
			nimln_(197, "ospaths.nim");
			T27_ = (NimStringDesc*)0;
			T27_ = rawNewString((head ? head->Sup.len : 0) + (tail ? tail->Sup.len : 0) + 1);
appendString(T27_, head);
appendChar(T27_, 47);
appendString(T27_, tail);
			result = T27_;
		}
		LA19_: ;
	}
	LA1_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple_7q7q3E6Oj24ZNVJb9aonhAg* Result) {
	nimfr_("splitFile", "ospaths.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_7q7q3E6Oj24ZNVJb9aonhAg_));
	nimln_(352, "ospaths.nim");
	{
		NIM_BOOL T3_;
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_8;
		T3_ = (NIM_BOOL)0;
		T3_ = ((path ? path->Sup.len : 0) == ((NI) 0));
		if (T3_) goto LA4_;
		TM_jvWQYw9bcuYhftfPX2ynPeg_8 = subInt((path ? path->Sup.len : 0), ((NI) 1));
		if (!path || (NU)((NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_8)) >= (NU)(path->Sup.len)) raiseIndexError();
		T3_ = (((NU8)(path->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_8)])) == ((NU8)(47)) || ((NU8)(path->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_8)])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(353, "ospaths.nim");
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(path));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_9)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyString(((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_9)));
	}
	goto LA1_;
	LA5_: ;
	{
		NI sepPos;
		NI dotPos;
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_13;
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_14;
		NI TM_jvWQYw9bcuYhftfPX2ynPeg_15;
		nimln_(355, "ospaths.nim");
		sepPos = ((NI) -1);
		nimln_(356, "ospaths.nim");
		dotPos = (path ? path->Sup.len : 0);
		{
			NI i;
			NI colontmp_;
			NI TM_jvWQYw9bcuYhftfPX2ynPeg_10;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			nimln_(357, "ospaths.nim");
			TM_jvWQYw9bcuYhftfPX2ynPeg_10 = subInt((path ? path->Sup.len : 0), ((NI) 1));
			colontmp_ = (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_10);
			nimln_(1993, "system.nim");
			res = colontmp_;
			{
				nimln_(1994, "system.nim");
				while (1) {
					NI TM_jvWQYw9bcuYhftfPX2ynPeg_12;
					if (!(((NI) 0) <= res)) goto LA10;
					nimln_(1995, "system.nim");
					i = res;
					nimln_(358, "ospaths.nim");
					{
						if (!path || (NU)(i) >= (NU)(path->Sup.len)) raiseIndexError();
						if (!((NU8)(path->data[i]) == (NU8)(46))) goto LA13_;
						nimln_(359, "ospaths.nim");
						{
							NIM_BOOL T17_;
							NIM_BOOL T18_;
							NI TM_jvWQYw9bcuYhftfPX2ynPeg_11;
							T17_ = (NIM_BOOL)0;
							T18_ = (NIM_BOOL)0;
							T18_ = (dotPos == (path ? path->Sup.len : 0));
							if (!(T18_)) goto LA19_;
							T18_ = (((NI) 0) < i);
							LA19_: ;
							T17_ = T18_;
							if (!(T17_)) goto LA20_;
							nimln_(360, "ospaths.nim");
							nimln_(1195, "system.nim");
							nimln_(360, "ospaths.nim");
							TM_jvWQYw9bcuYhftfPX2ynPeg_11 = subInt(i, ((NI) 1));
							if (!path || (NU)((NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_11)) >= (NU)(path->Sup.len)) raiseIndexError();
							T17_ = !((((NU8)(path->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_11)])) == ((NU8)(47)) || ((NU8)(path->data[(NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_11)])) == ((NU8)(47))));
							LA20_: ;
							if (!T17_) goto LA21_;
							dotPos = i;
						}
						LA21_: ;
					}
					goto LA11_;
					LA13_: ;
					{
						nimln_(361, "ospaths.nim");
						if (!path || (NU)(i) >= (NU)(path->Sup.len)) raiseIndexError();
						if (!(((NU8)(path->data[i])) == ((NU8)(47)) || ((NU8)(path->data[i])) == ((NU8)(47)))) goto LA24_;
						nimln_(362, "ospaths.nim");
						sepPos = i;
						nimln_(363, "ospaths.nim");
						goto LA8;
					}
					goto LA11_;
					LA24_: ;
					LA11_: ;
					nimln_(1996, "system.nim");
					TM_jvWQYw9bcuYhftfPX2ynPeg_12 = subInt(res, ((NI) 1));
					res = (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_12);
				} LA10: ;
			}
		} LA8: ;
		nimln_(364, "ospaths.nim");
		TM_jvWQYw9bcuYhftfPX2ynPeg_13 = subInt(sepPos, ((NI) 1));
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, ((NI) 0), (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_13)));
		nimln_(365, "ospaths.nim");
		TM_jvWQYw9bcuYhftfPX2ynPeg_14 = addInt(sepPos, ((NI) 1));
		TM_jvWQYw9bcuYhftfPX2ynPeg_15 = subInt(dotPos, ((NI) 1));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStrLast(path, (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_14), (NI)(TM_jvWQYw9bcuYhftfPX2ynPeg_15)));
		nimln_(366, "ospaths.nim");
		unsureAsgnRef((void**) (&(*Result).Field2), copyStr(path, dotPos));
	}
	LA1_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NI32, osLastError_tNPXXFl9cb3BG0pJKzUn9bew)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg_yWvWz5V6Ib7QshcAbOiDeQ)(NI32 errorCode) {
	NimStringDesc* result;
	nimfr_("osErrorMsg", "oserr.nim");
	result = (NimStringDesc*)0;
	nimln_(29, "oserr.nim");
	result = copyString(((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_9));
	nimln_(47, "oserr.nim");
	{
		NCSTRING T5_;
		nimln_(396, "system.nim");
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;
		nimln_(48, "oserr.nim");
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode);
		result = cstrToNimstr(T5_);
	}
	LA3_: ;
	popFrame();
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(396, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(396, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			nimln_(185, "gc.nim");
			(*c_2).refcount -= ((NI) 8);
			nimln_(276, "gc.nim");
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NOINLINE(void, raiseOSError_bEwAamo1N7TKcaU9akpiyIg)(NI32 errorCode, NimStringDesc* additionalInfo) {
	tyObject_OSError_3XwRQvmzCEOC4QnT706q1g* e;
	nimfr_("raiseOSError", "oserr.nim");
	e = (tyObject_OSError_3XwRQvmzCEOC4QnT706q1g*)0;
	nimln_(58, "oserr.nim");
	e = (tyObject_OSError_3XwRQvmzCEOC4QnT706q1g*) newObj((&NTI_Qx9aKy4vZ9bVz9bnG9brQcRHGA_), sizeof(tyObject_OSError_3XwRQvmzCEOC4QnT706q1g));
	(*e).Sup.Sup.Sup.m_type = (&NTI_3XwRQvmzCEOC4QnT706q1g_);
	nimln_(59, "oserr.nim");
	(*e).errorCode = errorCode;
	nimln_(60, "oserr.nim");
	{
		if (!((additionalInfo ? additionalInfo->Sup.len : 0) == ((NI) 0))) goto LA3_;
		nimln_(61, "oserr.nim");
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), osErrorMsg_yWvWz5V6Ib7QshcAbOiDeQ(errorCode));
	}
	goto LA1_;
	LA3_: ;
	{
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		nimln_(63, "oserr.nim");
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = osErrorMsg_yWvWz5V6Ib7QshcAbOiDeQ(errorCode);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (additionalInfo ? additionalInfo->Sup.len : 0) + 20);
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_16));
appendString(T6_, additionalInfo);
appendString(T6_, ((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_17));
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), T6_);
	}
	LA1_: ;
	nimln_(64, "oserr.nim");
	{
		NimStringDesc* T12_;
		if (!(!((*e).Sup.Sup.message) || ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA10_;
		nimln_(65, "oserr.nim");
		T12_ = (NimStringDesc*)0;
		T12_ = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM_jvWQYw9bcuYhftfPX2ynPeg_18));
		if (T12_) nimGCunrefNoCycle(T12_);
	}
	LA10_: ;
	nimln_(66, "oserr.nim");
	raiseException((Exception*)e, "OSError");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash__lXoMhn1ZYc9cAJa9bfA61msg)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	nimfr_("/", "ospaths.nim");
{	result = (NimStringDesc*)0;
	nimln_(218, "ospaths.nim");
	result = nosjoinPath(head, tail);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	nimfr_("isAbsolute", "ospaths.nim");
{	result = (NIM_BOOL)0;
	nimln_(438, "ospaths.nim");
	{
		if (!((path ? path->Sup.len : 0) == ((NI) 0))) goto LA3_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	nimln_(450, "ospaths.nim");
	if (!path || (NU)(((NI) 0)) >= (NU)(path->Sup.len)) raiseIndexError();
	result = ((NU8)(path->data[((NI) 0)]) == (NU8)(47));
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ospathsInit000)(void) {
	nimfr_("ospaths", "ospaths.nim");
nimRegisterThreadLocalMarker(TM_jvWQYw9bcuYhftfPX2ynPeg_2);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_ospathsDatInit000)(void) {
static TNimNode* TM_jvWQYw9bcuYhftfPX2ynPeg_7[3];
static TNimNode TM_jvWQYw9bcuYhftfPX2ynPeg_0[4];
NTI_sM4lkSb7zS6F7OVMvW9cffQ_.size = sizeof(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*);
NTI_sM4lkSb7zS6F7OVMvW9cffQ_.kind = 24;
NTI_sM4lkSb7zS6F7OVMvW9cffQ_.base = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
NTI_sM4lkSb7zS6F7OVMvW9cffQ_.flags = 2;
NTI_sM4lkSb7zS6F7OVMvW9cffQ_.marker = Marker_tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
NTI_7q7q3E6Oj24ZNVJb9aonhAg_.size = sizeof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg);
NTI_7q7q3E6Oj24ZNVJb9aonhAg_.kind = 18;
NTI_7q7q3E6Oj24ZNVJb9aonhAg_.base = 0;
NTI_7q7q3E6Oj24ZNVJb9aonhAg_.flags = 2;
TM_jvWQYw9bcuYhftfPX2ynPeg_7[0] = &TM_jvWQYw9bcuYhftfPX2ynPeg_0[1];
TM_jvWQYw9bcuYhftfPX2ynPeg_0[1].kind = 1;
TM_jvWQYw9bcuYhftfPX2ynPeg_0[1].offset = offsetof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg, Field0);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[1].name = "Field0";
TM_jvWQYw9bcuYhftfPX2ynPeg_7[1] = &TM_jvWQYw9bcuYhftfPX2ynPeg_0[2];
TM_jvWQYw9bcuYhftfPX2ynPeg_0[2].kind = 1;
TM_jvWQYw9bcuYhftfPX2ynPeg_0[2].offset = offsetof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg, Field1);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[2].name = "Field1";
TM_jvWQYw9bcuYhftfPX2ynPeg_7[2] = &TM_jvWQYw9bcuYhftfPX2ynPeg_0[3];
TM_jvWQYw9bcuYhftfPX2ynPeg_0[3].kind = 1;
TM_jvWQYw9bcuYhftfPX2ynPeg_0[3].offset = offsetof(tyTuple_7q7q3E6Oj24ZNVJb9aonhAg, Field2);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[3].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_jvWQYw9bcuYhftfPX2ynPeg_0[3].name = "Field2";
TM_jvWQYw9bcuYhftfPX2ynPeg_0[0].len = 3; TM_jvWQYw9bcuYhftfPX2ynPeg_0[0].kind = 2; TM_jvWQYw9bcuYhftfPX2ynPeg_0[0].sons = &TM_jvWQYw9bcuYhftfPX2ynPeg_7[0];
NTI_7q7q3E6Oj24ZNVJb9aonhAg_.node = &TM_jvWQYw9bcuYhftfPX2ynPeg_0[0];
}

