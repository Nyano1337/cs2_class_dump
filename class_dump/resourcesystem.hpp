class CAsyncResourceDataRequest : IAsyncResourceDataRequest { void* vtable[9]; }
class CAsyncResourceDataRequest::CAsyncProcessDataThread : CThread { void* vtable[7]; }
class CBaseAppSystem<IResourceSystem> : IResourceSystem {}
class CCodeResourceManifestManager : ICodeResourceManifestManager { void* vtable[7]; }
class CConCommandMemberAccessor<CResourceSystemProfiler> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CDefaultKV3TransferResourceTypeManager<500152235126> : CKV3ResourceTypeManager<500152235126> { void* vtable[21]; }
class CExampleSchemaVData_PolymorphicBase { void* vtable[4]; }
class CExampleSchemaVData_PolymorphicDerivedA : CExampleSchemaVData_PolymorphicBase { void* vtable[4]; }
class CExampleSchemaVData_PolymorphicDerivedB : CExampleSchemaVData_PolymorphicBase { void* vtable[4]; }
class CKV3ResourceBlockHelper : IAsyncProcessedDataResult { void* vtable[1]; }
class CKV3ResourceTypeManager<418564367478> : IResourceTypeManager {}
class CKV3ResourceTypeManager<500152235126> : IResourceTypeManager {}
class CKV3TransferContextBase : IErrorListener { void* vtable[6]; }
class CKV3TransferLoadContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3TransferSaveContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3Transfer_ResourceLoadInterface : IKV3TransferInterface_ResourceLoad { void* vtable[1]; }
class CLoadingResource : IAsyncResourceDataRequestOwner { void* vtable[3]; }
class CNullTypeManager : IResourceTypeManager { void* vtable[17]; }
class CPostConnectCallback { void* vtable[1]; }
class CRD_RegisterResourceDataUtils : IRD_RegisterResourceDataUtils { void* vtable[9]; }
class CResourceConstructor : ITSHashConstructor<ResourceBindingBase_t> { void* vtable[1]; }
class CResourceDeallocatorUtils : IResourceDeallocatorUtils { void* vtable[7]; }
class CResourceManifestTypeManager : IResourceTypeManager { void* vtable[17]; }
class CResourceSystem : CTier2AppSystem<IResourceSystem,0>, IResourceSystemUtils, IResourceHandleUtils, IResourceManifestRegistry { void* vtable[80]; }
class CResourceSystemLeakTracker : IResourceSystemLeakTracker { void* vtable[4]; }
class CResourceSystemProfiler : IResourceSystemProfiler { void* vtable[7]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CSchemaRegistration {}
class CSchemaRegistration_mathlib_extended : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_resourcefile : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_resourcesystem : CSchemaRegistration { void* vtable[1]; }
class CStreamingResourceData : IAsyncResourceDataRequestOwner { void* vtable[3]; }
class CThread {}
class CTier0AppSystem<IResourceSystem,0> : CBaseAppSystem<IResourceSystem> {}
class CTier1AppSystem<IResourceSystem,0> : CTier0AppSystem<IResourceSystem,0> {}
class CTier2AppSystem<IResourceSystem,0> : CTier1AppSystem<IResourceSystem,0> {}
class CVConResourceProfileCommandHandler : IVConCommDataReceived { void* vtable[1]; }
class CVDataTypeManager : CKV3ResourceTypeManager<418564367478>, IVDataTypeManager { void* vtable[21]; }
class ConCommand : ConCommandRef {}
class ConCommandRef {}
class IAppSystem {}
class IAsyncProcessedDataResult { void* vtable[1]; }
class IAsyncResourceDataRequest {}
class IAsyncResourceDataRequestOwner {}
class ICodeResourceManifestManager {}
class ICommandCallback {}
class ICommandCompletionCallback {}
class IErrorListener {}
class IKV3TransferInterface_ResourceLoad {}
class IRD_RegisterResourceDataUtils {}
class IResourceDeallocatorUtils {}
class IResourceHandleUtils {}
class IResourceManifestRegistry {}
class IResourceSystem : IAppSystem {}
class IResourceSystemLeakTracker {}
class IResourceSystemProfiler {}
class IResourceSystemUtils {}
class IResourceTypeManager {}
class ITSHashConstructor<ResourceBindingBase_t> {}
class IVConCommDataReceived {}
class IVDataTypeManager {}
