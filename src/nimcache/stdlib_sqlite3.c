/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/benji/.nim/lib -o /home/benji/dev/nim/website/src/nimcache/stdlib_sqlite3.c.o /home/benji/dev/nim/website/src/nimcache/stdlib_sqlite3.c */
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
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA;
typedef struct tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(NI32, tyProc_MGvm2GDOLe9cOGVrF2xiL8g) (NCSTRING filename, tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA** ppDb);
typedef N_CDECL_PTR(NCSTRING, tyProc_9c803Jlmvw39cDHXPnE9c9acPA) (tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA* para1);
typedef N_CDECL_PTR(int, tyProc_EhxAId0fqbb7y09bLz1RLng) (tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA* db, NCSTRING zSql, int nByte, tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw** ppStmt, NCSTRING* pzTail);
typedef N_CDECL_PTR(NI32, tyProc_Fhopq8qsQV4lYKX3MLNyKQ) (tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw* para1);
typedef N_CDECL_PTR(NI32, tyProc_KJS9c3LPhRMY74OUoHq9bNBw) (tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw* para1, NI32 iCol);
typedef N_CDECL_PTR(NCSTRING, tyProc_mmgU9bW4w7JmLmc3EGsbdlg) (tyObject_Tstmt_KEhcjAECDwKIYLLjIzakvw* para1, NI32 iCol);
typedef N_CDECL_PTR(NI32, tyProc_gjdebP9bh9a6kXA5fmIpsLzQ) (tyObject_Sqlite3_xRZkbCqVWSKf8kX4o9cbKXA* para1);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_ZpuQ9cIusnUOv1iEoFq9arZw_2;
tyProc_MGvm2GDOLe9cOGVrF2xiL8g Dl_505561_;
tyProc_9c803Jlmvw39cDHXPnE9c9acPA Dl_505574_;
tyProc_EhxAId0fqbb7y09bLz1RLng Dl_505589_;
tyProc_Fhopq8qsQV4lYKX3MLNyKQ Dl_505705_;
tyProc_Fhopq8qsQV4lYKX3MLNyKQ Dl_505747_;
tyProc_Fhopq8qsQV4lYKX3MLNyKQ Dl_505682_;
tyProc_KJS9c3LPhRMY74OUoHq9bNBw Dl_505715_;
tyProc_mmgU9bW4w7JmLmc3EGsbdlg Dl_505735_;
tyProc_gjdebP9bh9a6kXA5fmIpsLzQ Dl_505455_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_ZpuQ9cIusnUOv1iEoFq9arZw_4, "libsqlite3.so", 13);
STRING_LITERAL(TM_ZpuQ9cIusnUOv1iEoFq9arZw_6, "libsqlite3.so.0", 15);
STRING_LITERAL(TM_ZpuQ9cIusnUOv1iEoFq9arZw_7, "libsqlite3.so(|.0)", 18);

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
N_LIB_PRIVATE N_NIMCALL(void, stdlib_sqlite3Init000)(void) {
	nimfr_("sqlite3", "sqlite3.nim");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_sqlite3DatInit000)(void) {
if (!((TM_ZpuQ9cIusnUOv1iEoFq9arZw_2 = nimLoadLibrary(((NimStringDesc*) &TM_ZpuQ9cIusnUOv1iEoFq9arZw_4)))
||(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2 = nimLoadLibrary(((NimStringDesc*) &TM_ZpuQ9cIusnUOv1iEoFq9arZw_6)))
)) nimLoadLibraryError(((NimStringDesc*) &TM_ZpuQ9cIusnUOv1iEoFq9arZw_7));
	Dl_505561_ = (tyProc_MGvm2GDOLe9cOGVrF2xiL8g) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_open");
	Dl_505574_ = (tyProc_9c803Jlmvw39cDHXPnE9c9acPA) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_errmsg");
	Dl_505589_ = (tyProc_EhxAId0fqbb7y09bLz1RLng) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_prepare_v2");
	Dl_505705_ = (tyProc_Fhopq8qsQV4lYKX3MLNyKQ) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_step");
	Dl_505747_ = (tyProc_Fhopq8qsQV4lYKX3MLNyKQ) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_finalize");
	Dl_505682_ = (tyProc_Fhopq8qsQV4lYKX3MLNyKQ) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_column_count");
	Dl_505715_ = (tyProc_KJS9c3LPhRMY74OUoHq9bNBw) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_column_bytes");
	Dl_505735_ = (tyProc_mmgU9bW4w7JmLmc3EGsbdlg) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_column_text");
	Dl_505455_ = (tyProc_gjdebP9bh9a6kXA5fmIpsLzQ) nimGetProcAddr(TM_ZpuQ9cIusnUOv1iEoFq9arZw_2, "sqlite3_close");
}

