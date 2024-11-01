class CAsyncFileSystem2 : CTier2AppSystem<IAsyncFileSystem2,0> { void* vtable[26]; }
class CAsyncFileSystem2::CBarrierRequest : CAsyncFileSystem2::IRequest { void* vtable[1]; }
class CAsyncFileSystem2::CCompletionQueue : IIOCompletionQueue { void* vtable[2]; }
class CAsyncFileSystem2::CCopyFileHandle : IAsyncCopyRequest2, CAsyncFileSystem2::IRequest, std::enable_shared_from_this<CAsyncFileSystem2::CCopyFileHandle> { void* vtable[4]; }
class CAsyncFileSystem2::CCopyFileRequestBuilder : IAsyncFileSystem2::ICopyFileRequestBuilder { void* vtable[2]; }
class CAsyncFileSystem2::CIOServiceThread : CThread { void* vtable[7]; }
class CAsyncFileSystem2::CReadRequestBuilder : IAsyncFileSystem2::IReadRequestBuilder { void* vtable[2]; }
class CAsyncFileSystem2::CReadRequestHandle : IAsyncReadRequest2, CAsyncFileSystem2::IRequest, std::enable_shared_from_this<CAsyncFileSystem2::CReadRequestHandle> { void* vtable[11]; }
class CAsyncFileSystem2::CWriteRequestBuilder : IAsyncFileSystem2::IWriteRequestBuilder { void* vtable[2]; }
class CAsyncFileSystem2::CWriteRequestHandle : IAsyncWriteRequest2, CAsyncFileSystem2::IRequest, std::enable_shared_from_this<CAsyncFileSystem2::CWriteRequestHandle> { void* vtable[7]; }
class CAsyncFileSystem2::IRequest {}
class CBaseAppSystem<IAsyncFileSystem2> : IAsyncFileSystem2 {}
class CBaseAppSystem<IFileSystem> : IFileSystem {}
class CBaseFileSystem : CTier2AppSystem<IFileSystem,0> { void* vtable[137]; }
class CBufferStream : IWriteStream { void* vtable[2]; }
class CFileHandle { void* vtable[1]; }
class CFileStream : IWriteStream { void* vtable[2]; }
class CFileSystemReloadFileList : IFileList { void* vtable[2]; }
class CFileSystem_Stdio : CBaseFileSystem { void* vtable[137]; }
class CFioReadOnlyFile : CStdFilesystemFile { void* vtable[11]; }
class CFioReadOnlyMemoryMappedFile : IMemoryMappedFile { void* vtable[3]; }
class CIODelayAlarmThread : CThread { void* vtable[7]; }
class CMemoryMappedFileSection : IMemoryMappedFile { void* vtable[3]; }
class CMemoryMappedFileSection_SelfDelete : CMemoryMappedFileSection { void* vtable[3]; }
class CPackedStoreMemoryMappedFile : IMemoryMappedFile { void* vtable[3]; }
class CPackedStoreMemoryMappedFile_HierarchicalParent : CPackedStoreMemoryMappedFile { void* vtable[3]; }
class CPostConnectCallback { void* vtable[1]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CStdFilesystemFile { void* vtable[11]; }
class CStdioFile : CStdFilesystemFile { void* vtable[11]; }
class CThread {}
class CTier0AppSystem<IAsyncFileSystem2,0> : CBaseAppSystem<IAsyncFileSystem2> {}
class CTier0AppSystem<IFileSystem,0> : CBaseAppSystem<IFileSystem> {}
class CTier1AppSystem<IAsyncFileSystem2,0> : CTier0AppSystem<IAsyncFileSystem2,0> {}
class CTier1AppSystem<IFileSystem,0> : CTier0AppSystem<IFileSystem,0> {}
class CTier2AppSystem<IAsyncFileSystem2,0> : CTier1AppSystem<IAsyncFileSystem2,0> {}
class CTier2AppSystem<IFileSystem,0> : CTier1AppSystem<IFileSystem,0> {}
class CZip : IZip { void* vtable[21]; }
class IAppSystem {}
class IAsyncCopyRequest2 { void* vtable[4]; }
class IAsyncFileSystem2 : IAppSystem {}
class IAsyncFileSystem2::ICopyFileRequestBuilder { void* vtable[2]; }
class IAsyncFileSystem2::IReadRequestBuilder { void* vtable[2]; }
class IAsyncFileSystem2::IWriteRequestBuilder { void* vtable[2]; }
class IAsyncReadRequest2 { void* vtable[11]; }
class IAsyncWriteRequest2 { void* vtable[7]; }
class IFileList {}
class IFileSystem : IAppSystem {}
class IIOCompletionQueue { void* vtable[2]; }
class IMemoryMappedFile { void* vtable[3]; }
class IWriteStream {}
class IZip {}
