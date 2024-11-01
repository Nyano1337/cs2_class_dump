class CBaseAppSystem<INetworkSystem> : INetworkSystem {}
class CBidirMsg_RebroadcastGameEvent : google::protobuf::Message { void* vtable[17]; }
class CBidirMsg_RebroadcastSource : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_BaselineAck : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ClientInfo : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Diagnostic : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_FileCRCCheck : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_HltvFixupOperatorTick : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_HltvReplay : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ListenEvents : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_LoadingProgress : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Move : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RconServerDetails : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RconServerDetails_t : CNetMessagePB<35,CCLCMsg_RconServerDetails,0,1,0> { void* vtable[5]; }
class CCLCMsg_RequestPause : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RespondCvarValue : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ServerStatus : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_SplitPlayerConnect : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_SplitPlayerDisconnect : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CConCommandMemberAccessor<CNetworkMessages> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CDecodeSerializerStack : CSerializerStack { void* vtable[3]; }
class CDeltaCalculator : ISerializedEntityErrorSpewHook { void* vtable[1]; }
class CDeltaFieldPathTracer : IDeltaFieldPathTracer { void* vtable[1]; }
class CEncodeSerializerStack : CSerializerStack { void* vtable[3]; }
class CEntityMsg : google::protobuf::Message { void* vtable[17]; }
class CFieldPathHuffmanEncoder::INode { void* vtable[2]; }
class CFieldPathHuffmanEncoder::InternalNode : CFieldPathHuffmanEncoder::INode { void* vtable[2]; }
class CFieldPathHuffmanEncoder::LeafNode : CFieldPathHuffmanEncoder::INode { void* vtable[2]; }
class CFieldShadowSpewCollector : IFieldShadowSpewCollector { void* vtable[1]; }
class CFlattenedSerializerReadFieldListListener : IFlattenedSerializerSpewListener { void* vtable[6]; }
class CFlattenedSerializerSpewFunc_Log : IFlattenedSerializerSpewFunc { void* vtable[3]; }
class CFlattenedSerializers : IFlattenedSerializers { void* vtable[40]; }
class CKV3TransferContextBase : IErrorListener { void* vtable[6]; }
class CKV3TransferLoadContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3TransferSaveContext : CKV3TransferContextBase { void* vtable[6]; }
class CMsgIPCAddress : google::protobuf::Message { void* vtable[17]; }
class CMsgPlayerInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgQAngle : google::protobuf::Message { void* vtable[17]; }
class CMsgQuaternion : google::protobuf::Message { void* vtable[17]; }
class CMsgRGBA : google::protobuf::Message { void* vtable[17]; }
class CMsgServerNetworkStats : google::protobuf::Message { void* vtable[17]; }
class CMsgServerNetworkStats_Player : google::protobuf::Message { void* vtable[17]; }
class CMsgServerNetworkStats_Port : google::protobuf::Message { void* vtable[17]; }
class CMsgServerPeer : google::protobuf::Message { void* vtable[17]; }
class CMsgServerUserCmd : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2SystemSpecs : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2VProfLiteReport : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2VProfLiteReportItem : google::protobuf::Message { void* vtable[17]; }
class CMsgTransform : google::protobuf::Message { void* vtable[17]; }
class CMsgVector : google::protobuf::Message { void* vtable[17]; }
class CMsgVector2D : google::protobuf::Message { void* vtable[17]; }
class CMsgVoiceAudio : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars_CVar : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_DebugOverlay : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_NOP : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CNETMsg_SetConVar : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SignonState : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Load : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_LoadCompleted : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_ManifestUpdate : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_SetCreationTick : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Unload : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SplitScreenUser : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SplitScreenUser_t : CNetMessagePB<3,CNETMsg_SplitScreenUser,11,1,0> { void* vtable[5]; }
class CNETMsg_StringCmd : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_Tick : google::protobuf::Message { void* vtable[17]; }
class CNetChan : INetChannel, CUtlSlot { void* vtable[83]; }
class CNetMessage { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageConnectionClosed,11,1,0> : CNetMessage, NetMessageConnectionClosed { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageConnectionClosed,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,NetMessageConnectionCrashed,11,1,0> : CNetMessage, NetMessageConnectionCrashed { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageConnectionCrashed,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,NetMessageSplitscreenUserChanged,11,1,0> : CNetMessage, NetMessageSplitscreenUserChanged { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageSplitscreenUserChanged,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<0,CNETMsg_NOP,11,1,0> : CNetMessage, CNETMsg_NOP { void* vtable[5]; }
class CNetMessagePB<0,CNETMsg_NOP,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<1073741824,NetMessagePacketStart,11,1,0> : CNetMessage, NetMessagePacketStart { void* vtable[5]; }
class CNetMessagePB<1073741824,NetMessagePacketStart,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<1073741825,NetMessagePacketEnd,11,1,0> : CNetMessage, NetMessagePacketEnd { void* vtable[5]; }
class CNetMessagePB<1073741825,NetMessagePacketEnd,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<3,CNETMsg_SplitScreenUser,11,1,0> : CNetMessage, CNETMsg_SplitScreenUser { void* vtable[5]; }
class CNetMessagePB<3,CNETMsg_SplitScreenUser,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<35,CCLCMsg_RconServerDetails,0,1,0> : CNetMessage, CCLCMsg_RconServerDetails { void* vtable[5]; }
class CNetMessagePB<35,CCLCMsg_RconServerDetails,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetWhyFieldExcludedFunctor : ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CNetworkEncodingStats : INetworkEncodingStats, IVConCommDataReceived { void* vtable[6]; }
class CNetworkFieldChangedEventQueue : INetworkFieldChangedEventQueue { void* vtable[13]; }
class CNetworkFieldSerializerAllocator : INetworkFieldSerializerAllocator { void* vtable[4]; }
class CNetworkMessages : INetworkMessages { void* vtable[38]; }
class CNetworkSerializerPB : INetworkMessageInternal { void* vtable[9]; }
class CNetworkSystem : CTier2AppSystem<INetworkSystem,0>, IVConCommDataReceived { void* vtable[55]; }
class CPostConnectCallback { void* vtable[1]; }
class CRefCountServiceBase<CRefMT> {}
class CRefCounted<CRefCountServiceBase<CRefMT> > : CRefCountServiceBase<CRefMT> {}
class CSVCMsgList_GameEvents : google::protobuf::Message { void* vtable[17]; }
class CSVCMsgList_GameEvents_event_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_BSPDecal : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Broadcast_Command : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClassInfo : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClassInfo_class_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClearAllStringTables : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CreateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CrosshairAngle : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FixAngle : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FlattenedSerializer : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FullFrameSplit : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEvent : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList_descriptor_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList_key_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEvent_key_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameSessionConfiguration : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GetCvarValue : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HLTVStatus : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HltvFixupOperatorStatus : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HltvReplay : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Menu : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities_alternate_baseline_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities_non_transmitted_entities_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketReliable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PeerList : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Prefetch : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Print : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_RconServerDetails : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SendTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SendTable_sendprop_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ServerInfo : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ServerSteamID : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SetPause : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SetView : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Sounds : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Sounds_sounddata_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SplitScreen : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_StopSound : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_TempEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UpdateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserCommands : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserMessage : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_VoiceInit : google::protobuf::Message { void* vtable[17]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CSchemaRegistration {}
class CSchemaRegistration_networksystem : CSchemaRegistration { void* vtable[1]; }
class CSerializedEntities : ISerializedEntities { void* vtable[23]; }
class CSerializedEntityPolymorphicFieldsMetadataHelper : IPolymorphicMetadataHelper { void* vtable[1]; }
class CSerializerStack { void* vtable[3]; }
class CSource2Metrics_MatchPerfSummary_Notification : google::protobuf::Message { void* vtable[17]; }
class CSource2Metrics_MatchPerfSummary_Notification_Client : google::protobuf::Message { void* vtable[17]; }
class CTier0AppSystem<INetworkSystem,0> : CBaseAppSystem<INetworkSystem> {}
class CTier1AppSystem<INetworkSystem,0> : CTier0AppSystem<INetworkSystem,0> {}
class CTier2AppSystem<INetworkSystem,0> : CTier1AppSystem<INetworkSystem,0> {}
class CUtlSlot {}
class ConCommand : ConCommandRef {}
class ConCommandRef {}
class IAppSystem {}
class ICommandCallback {}
class ICommandCompletionCallback {}
class IDeltaFieldPathTracer {}
class IErrorListener {}
class IFieldShadowSpewCollector {}
class IFlattenedSerializerSpewFunc { void* vtable[3]; }
class IFlattenedSerializerSpewListener { void* vtable[6]; }
class IFlattenedSerializers {}
class IMultipleWorkerJob { void* vtable[2]; }
class INetChannel : INetChannelInfo { void* vtable[83]; }
class INetChannelInfo {}
class INetworkEncodingStats {}
class INetworkFieldChangedEventQueue { void* vtable[13]; }
class INetworkFieldSerializerAllocator {}
class INetworkMessageInternal { void* vtable[9]; }
class INetworkMessages {}
class INetworkSystem : IAppSystem {}
class IPolymorphicMetadataHelper {}
class IProtobufBinding {}
class ISerializedEntities {}
class ISerializedEntityErrorSpewHook {}
class IVConCommDataReceived {}
class NetMessageConnectionClosed : google::protobuf::Message { void* vtable[17]; }
class NetMessageConnectionClosed_t : CNetMessagePB<-1,NetMessageConnectionClosed,11,1,0> { void* vtable[5]; }
class NetMessageConnectionCrashed : google::protobuf::Message { void* vtable[17]; }
class NetMessageConnectionCrashed_t : CNetMessagePB<-1,NetMessageConnectionCrashed,11,1,0> { void* vtable[5]; }
class NetMessagePacketEnd : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class NetMessagePacketEnd_t : CNetMessagePB<1073741825,NetMessagePacketEnd,11,1,0> { void* vtable[5]; }
class NetMessagePacketStart : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class NetMessagePacketStart_t : CNetMessagePB<1073741824,NetMessagePacketStart,11,1,0> { void* vtable[5]; }
class NetMessageSplitscreenUserChanged : google::protobuf::Message { void* vtable[17]; }
class NetMessageSplitscreenUserChanged_t : CNetMessagePB<-1,NetMessageSplitscreenUserChanged,11,1,0> { void* vtable[5]; }
class ProtoFlattenedSerializerField_t : google::protobuf::Message { void* vtable[17]; }
class ProtoFlattenedSerializerField_t_polymorphic_field_t : google::protobuf::Message { void* vtable[17]; }
class ProtoFlattenedSerializer_t : google::protobuf::Message { void* vtable[17]; }
class vcon_NetworkEncodingStats_t : CRefCounted<CRefCountServiceBase<CRefMT> > { void* vtable[1]; }
