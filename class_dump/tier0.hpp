class CAsyncScheduledFunctionManager : IAsyncScheduledFunctions { void* vtable[6]; }
class CBaseAppSystem<ICvar> : ICvar {}
class CBaseAppSystem<IProcessUtils> : IProcessUtils {}
class CBaseAppSystem<ITestScriptMgr> : ITestScriptMgr {}
class CBaseAppSystem<IUtlStringTokenSystem> : IUtlStringTokenSystem {}
class CBufferStringFormatOutputStream : IFormatOutputStream { void* vtable[8]; }
class CCharBufferFormatOutputStream : IFormatOutputStream { void* vtable[8]; }
class CColorizedLoggingListener : CSimpleLoggingListener { void* vtable[5]; }
class CCommandLine : ICommandLine { void* vtable[25]; }
class CConCommandMemberAccessor<CCvar> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CCountedStringPool_CI { void* vtable[1]; }
class CCvar : CTier0AppSystem<ICvar,0> { void* vtable[42]; }
class CDefaultKeyValuesErrorSpew : IKeyValuesErrorSpew { void* vtable[3]; }
class CDefaultLoggingResponsePolicy : ILoggingResponsePolicy { void* vtable[1]; }
class CDisposableKeyValuesSystem : CKeyValuesSystemBase { void* vtable[20]; }
class CDmSymbolTableLarge : IGlobalSymbolMap { void* vtable[9]; }
class CExecMultiWorkerJob : CThreadedJob { void* vtable[7]; }
class CFiberJobPool : IFiberJobPool { void* vtable[6]; }
class CGlobalThreadPool : CThreadPool { void* vtable[18]; }
class CHeapMemAlloc : IMemAlloc_Internal { void* vtable[44]; }
class CJobThread : CThread { void* vtable[7]; }
class CKeyValuesDumpContextAsDevMsg : IKeyValuesDumpContextAsText { void* vtable[5]; }
class CKeyValuesDumpContextToBufferString : IKeyValuesDumpContextAsText { void* vtable[5]; }
class CKeyValuesDumpContextToLoggingChannel : IKeyValuesDumpContextAsText { void* vtable[5]; }
class CKeyValuesSystem : CKeyValuesSystemBase { void* vtable[20]; }
class CKeyValuesSystemBase : IKeyValuesSystem { void* vtable[20]; }
class CLoadKV3FromText : IErrorListener { void* vtable[6]; }
class CMemPassAllocT<LLA_AddAlignedSelectors<LowLevelAllocationScheme_jemalloc> > : IMemAlloc_Internal {}
class CMemStdPurePassThroughAlloc : CMemPassAllocT<LLA_AddAlignedSelectors<LowLevelAllocationScheme_jemalloc> > { void* vtable[44]; }
class CMiniDumpCommentBuilderBase { void* vtable[3]; }
class COneTimeEvent : IRefCounted { void* vtable[3]; }
class CParallelProcessorAbstract<CParallelProcessor<int,CMemberFuncJobItemProcessor<int,CCallQueue,CCallQueue>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract_Base {}
class CPerfTraceDepotDefault : IPerfTraceDepot { void* vtable[2]; }
class CPooledStdFunctionJob : CStdFunctionJob { void* vtable[7]; }
class CProcess : IProcess { void* vtable[16]; }
class CProcessPipeRead : IPipeRead { void* vtable[7]; }
class CProcessUtils : CTier0AppSystem<IProcessUtils,0> { void* vtable[25]; }
class CRefCountServiceBase<CRefMT> {}
class CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > : IRefCounted, CRefCountServiceBase<CRefMT> {}
class CRefCounted1<IThreadPool,CRefCountServiceBase<CRefMT> > : IThreadPool, CRefCountServiceBase<CRefMT> {}
class CSimpleLoggingListener : ILoggingListener { void* vtable[5]; }
class CStdFunctionJob : CThreadedJob { void* vtable[7]; }
class CStdIOFormatOutputStream : IFormatOutputStream { void* vtable[8]; }
class CStdMemAlloc<MemConfig_t> : IMemAlloc_Internal { void* vtable[44]; }
class CTestScriptMgr : CTier0AppSystem<ITestScriptMgr,0> { void* vtable[18]; }
class CThread { void* vtable[7]; }
class CThreadPool : CRefCounted1<IThreadPool,CRefCountServiceBase<CRefMT> > { void* vtable[18]; }
class CThreadPool::CSerialJobExecutor : CThreadedJob { void* vtable[7]; }
class CThreadedJob : CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > { void* vtable[7]; }
class CThreadedTraverseJob_FastWin32 : CThreadedJob { void* vtable[7]; }
class CTier0AppSystem<ICvar,0> : CBaseAppSystem<ICvar> {}
class CTier0AppSystem<IProcessUtils,0> : CBaseAppSystem<IProcessUtils> {}
class CTier0AppSystem<ITestScriptMgr,0> : CBaseAppSystem<ITestScriptMgr> {}
class CTier0AppSystem<IUtlStringTokenSystem,0> : CBaseAppSystem<IUtlStringTokenSystem> {}
class CTier0MasterMobileEventListener : IMobileEventListener { void* vtable[4]; }
class CUtlBufferFormatOutputStream : IFormatOutputStream { void* vtable[8]; }
class CUtlCStringConversion : CUtlCharConversion { void* vtable[1]; }
class CUtlCharConversion { void* vtable[1]; }
class CUtlJSONConversion : CUtlCharConversion { void* vtable[1]; }
class CUtlNoEscConversion : CUtlCharConversion { void* vtable[1]; }
class CUtlStringFormatOutputStream : IFormatOutputStream { void* vtable[8]; }
class CUtlStringTokenSystem : CTier0AppSystem<IUtlStringTokenSystem,0> { void* vtable[13]; }
class CUtlStringTokenSystem::CStringConstructor : ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource> { void* vtable[1]; }
class CVBinaryModule { void* vtable[4]; }
class CVDbgHelpSymbolModule : CVSymbolModule { void* vtable[19]; }
class CVDwarfBinaryModule : CVBinaryModule { void* vtable[4]; }
class CVDwarfSymbolModule : CVSymbolModule { void* vtable[19]; }
class CVImageHlpBinaryModule : CVBinaryModule { void* vtable[4]; }
class CVNullBinaryModule : CVBinaryModule { void* vtable[4]; }
class CVProfileOutputColumn_AverageTimePerCall : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVProfileOutputColumn_AverageTimePerFrame : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVProfileOutputColumn_Base {}
class CVProfileOutputColumn_Count : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVProfileOutputColumn_Name : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVProfileOutputColumn_Peak : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVProfileOutputColumn_Sum : CVProfileOutputColumn_Base { void* vtable[2]; }
class CVSymbolModule { void* vtable[19]; }
class ConCommand : ConCommandRef {}
class ConCommandRef {}
class IAppSystem {}
class IAsyncScheduledFunctions { void* vtable[6]; }
class ICommandCallback {}
class ICommandCompletionCallback {}
class ICommandLine {}
class ICpuTopology { void* vtable[11]; }
class ICvar : IAppSystem {}
class IErrorListener {}
class IFiberJobPool {}
class IFiberThreadWorkerPool {}
class IFormatOutputStream { void* vtable[8]; }
class IGlobalSymbolMap {}
class IKeyValuesDumpContext {}
class IKeyValuesDumpContextAsText : IKeyValuesDumpContext { void* vtable[5]; }
class IKeyValuesErrorSpew {}
class IKeyValuesSystem { void* vtable[20]; }
class ILoggingListener {}
class ILoggingResponsePolicy {}
class IMemAlloc { void* vtable[40]; }
class IMemAlloc_Internal : IMemAlloc {}
class IMobileEventListener { void* vtable[4]; }
class IMultipleWorkerJob { void* vtable[2]; }
class IPerfTraceDepot {}
class IPipeRead {}
class IProcess { void* vtable[16]; }
class IProcessUtils : IAppSystem {}
class IRefCounted { void* vtable[3]; }
class ITSHashConstructor<CUtlStringTokenSystem::CTokenStringAndSource> {}
class ITestScriptMgr : IAppSystem {}
class IThreadPool : IRefCounted {}
class IUtlStringTokenSystem : IAppSystem {}
class TSListTests::CListOps : TSListTests::CTestOps { void* vtable[4]; }
class TSListTests::CQueueOps : TSListTests::CTestOps { void* vtable[4]; }
class TSListTests::CTestOps {}
class ThreadPoolTest::CCountJob : CThreadedJob { void* vtable[7]; }
