#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct KeyCollection_t5D29ACDC3796655A1CFFD6492632890D2C0C4FE3;
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ValueCollection_t74C55E7F85C88A5EE8BE1B2852713061041B6958;
struct EntryU5BU5D_t174FF43266D07B95F59145A9313C77353D96618C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IUnityroomApiClient_t6A0C177A129579563926C8604E73769FEEDCEC8B;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5;
struct Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1;
struct String_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A;
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t4FA10A7B0CCF9EFFB78805BB57BCF68A8BA5DCF0;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
struct U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5;
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____1FFA7BE50FA44621C60F529E3C24EF49BF5F14B79A00473DC86C75CDCEE5647C_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____2F46DDE99071BA769FB69B55F2DEBCED6E8B6D1F2B62D5B5A38897F14D660FA0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral09BF09881179677B8850817E265CF7C67AA42804;
IL2CPP_EXTERN_C String_t* _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
IL2CPP_EXTERN_C String_t* _stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB;
IL2CPP_EXTERN_C String_t* _stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1;
IL2CPP_EXTERN_C String_t* _stringLiteral979D01B9ED0B114E874D86D861AC3C0E18F867C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05;
IL2CPP_EXTERN_C String_t* _stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79;
IL2CPP_EXTERN_C String_t* _stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7A6C364B0CEC17F2C93A0C52B13A3B1BD019D8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tFB2033F4CC3574B0A320ED11A20F3FDB60C27AD0 
{
};
struct Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t174FF43266D07B95F59145A9313C77353D96618C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5D29ACDC3796655A1CFFD6492632890D2C0C4FE3* ____keys;
	ValueCollection_t74C55E7F85C88A5EE8BE1B2852713061041B6958* ____values;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578  : public RuntimeObject
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct Hmac_tDC1BDD45089F67F2D0E427A59282D380FF434C5C  : public RuntimeObject
{
};
struct RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0  : public RuntimeObject
{
	int32_t ____maxTryCount;
	int32_t ___U3CCountU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A  : public RuntimeObject
{
	int32_t ____intervalSeconds;
	int32_t ____lastSentTime;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t4FA10A7B0CCF9EFFB78805BB57BCF68A8BA5DCF0  : public RuntimeObject
{
};
struct UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217  : public RuntimeObject
{
};
struct Util_t5B6C5CD0731D8A5DFB76C3ED5EF080F523A58EAA  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary;
	bool ___containsFiles;
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* ___U3CU3E4__this;
	float ___U3CscoreU3E5__2;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__3;
};
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	bool ___hasValue;
	float ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	bool ____emitUTF8Identifier;
	bool ____isThrowException;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D337_t181C3E35D05AB716FE92BD07AE7F5BA47A184C1E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D337_t181C3E35D05AB716FE92BD07AE7F5BA47A184C1E__padding[337];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D787_t4FF15950E6023A4AFABCC3EDA9BC7F7364A610B0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D787_t4FF15950E6023A4AFABCC3EDA9BC7F7364A610B0__padding[787];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	int32_t ___value__;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	int32_t ___blockSizeValue;
	String_t* ___m_hashName;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer;
	bool ___m_hashing;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5  : public RuntimeObject
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ____currentScore;
	bool ___U3CScoreChangedU3Ek__BackingField;
};
struct ScoreboardWriteMode_tA4F9C426FD60465182ADA49A053A2BC5CCDC0E2C 
{
	int32_t ___value__;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Result_tFB98154F15BF37A66902802D441FEFADC68D4C87 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField;
};
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField;
};
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* ____retryCounter;
	ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* ____scoreHolder;
	TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* ____timeKeeper;
	int32_t ____boardNo;
	String_t* ____hmacKey;
};
struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	String_t* ___HmacKey;
	Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* ____scoreboards;
};
struct U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578_StaticFields
{
	__StaticArrayInitTypeSizeU3D787_t4FF15950E6023A4AFABCC3EDA9BC7F7364A610B0 ___1FFA7BE50FA44621C60F529E3C24EF49BF5F14B79A00473DC86C75CDCEE5647C;
	__StaticArrayInitTypeSizeU3D337_t181C3E35D05AB716FE92BD07AE7F5BA47A184C1E ___2F46DDE99071BA769FB69B55F2DEBCED6E8B6D1F2B62D5B5A38897F14D660FA0;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields
{
	UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* ____instance;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A (const RuntimeMethod* method)
{
	return ((  UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0 (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
inline Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, int32_t ___0_boardNo, String_t* ___1_hmacKey, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___0_key, Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
inline Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___0_score, int32_t ___1_mode, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___0_encoderShouldEmitUTF8Identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, float ___0_score, int32_t ___1_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2 (String_t* ___0_dataText, String_t* ___1_base64AuthenticationKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373 (String_t* ___0_uri, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___1_formData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___0_maxTryCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_intervalSeconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___0_score, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_now, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_now, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_targetTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, int32_t ___7_kind, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mDFC3D447733280114DEC1756C178E2CC33DEC72D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____1FFA7BE50FA44621C60F529E3C24EF49BF5F14B79A00473DC86C75CDCEE5647C_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____2F46DDE99071BA769FB69B55F2DEBCED6E8B6D1F2B62D5B5A38897F14D660FA0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)787));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____1FFA7BE50FA44621C60F529E3C24EF49BF5F14B79A00473DC86C75CDCEE5647C_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)337));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t624852B5508701AD7081FF3FE5962D67EF914578____2F46DDE99071BA769FB69B55F2DEBCED6E8B6D1F2B62D5B5A38897F14D660FA0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)9);
		(&V_0)->___TotalTypes = ((int32_t)9);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m96762D20800CB047FD61E608C7575C1FA012EB9D (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t4FA10A7B0CCF9EFFB78805BB57BCF68A8BA5DCF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_pinvoke(const MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36& unmarshaled, MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_pinvoke_back(const MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_pinvoke& marshaled, MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_pinvoke_cleanup(MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_com(const MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36& unmarshaled, MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_com_back(const MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_com& marshaled, MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshal_com_cleanup(MonoScriptData_t600763469A0E17F8744090C84379F94D79F59A36_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_0 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_2 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance;
		return L_2;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_3;
		L_3 = Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A(Object_FindObjectOfType_TisUnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_mE08AF0D9D0635660053A484912641C6007B1C49A_RuntimeMethod_var);
		((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance), (void*)L_3);
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_4 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance;
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral298765A9954863BA5D4ED118AD88C61DED93D3E1, NULL);
	}

IL_0034:
	{
		UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* L_6 = ((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_StaticFields*)il2cpp_codegen_static_fields_for(UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var))->____instance;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient_Awake_mB942592ADD846AFD06F543AE2FE8077BCB535594 (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = UnityroomApiClient_get_Instance_m31E8C104F88F6F056DF23D0FA3FD2D304143E0C2(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(((UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF*)CastclassClass((RuntimeObject*)L_0, UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF_il2cpp_TypeInfo_var)), __this, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral5390F498EEB3460412EE76C345A79B4F6A1827CB, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		String_t* L_5 = __this->___HmacKey;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralB656D20F855EAD96E77A688F37C0B413976808DA, L_7, NULL);
	}

IL_0055:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient_SendScore_mEA55782761EF6CC209214631EBCDFF56BBF7D44F (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, int32_t ___0_boardNo, float ___1_score, int32_t ___2_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* V_0 = NULL;
	{
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_0 = __this->____scoreboards;
		int32_t L_1 = ___0_boardNo;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0(L_0, L_1, Dictionary_2_ContainsKey_mC4EFC5BB393804D6A03236AABA5C8A00700166A0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_4;
		L_4 = GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC(L_3, GameObject_AddComponent_TisScoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1_mC62010232189FC067632A2DA3E6D0F3F970A44AC_RuntimeMethod_var);
		V_0 = L_4;
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_5 = V_0;
		int32_t L_6 = ___0_boardNo;
		String_t* L_7 = __this->___HmacKey;
		Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189(L_5, L_6, L_7, NULL);
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_8 = __this->____scoreboards;
		int32_t L_9 = ___0_boardNo;
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_10 = V_0;
		Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED(L_8, L_9, L_10, Dictionary_2_Add_m0B5C8FD907E3E7A5E402434E523F30A341BBA2ED_RuntimeMethod_var);
	}

IL_0034:
	{
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_11 = __this->____scoreboards;
		int32_t L_12 = ___0_boardNo;
		Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_13;
		L_13 = Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB(L_11, L_12, Dictionary_2_get_Item_mB7F8D39CEE782A73C1726674E973E2408C01BABB_RuntimeMethod_var);
		float L_14 = ___1_score;
		int32_t L_15 = ___2_mode;
		Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33(L_13, L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityroomApiClient__ctor_mB96938A2D6594A1BE5528E8D51DEF3981986E5A2 (UnityroomApiClient_t3E91D1DCE15E025CDD796E3E821DBA502D534EBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953* L_0 = (Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953*)il2cpp_codegen_object_new(Dictionary_2_t3BAF1757F35A0E6F2102C32FCE493C1D78C4F953_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C(L_0, Dictionary_2__ctor_mAAFCD5AD7FEB9D9B1E5E23DF2D852AA9C13F291C_RuntimeMethod_var);
		__this->____scoreboards = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreboards), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2 (String_t* ___0_dataText, String_t* ___1_base64AuthenticationKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		String_t* L_1 = ___0_dataText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = ___1_base64AuthenticationKey;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_3, NULL);
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_5 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_5, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_5, L_6, NULL);
		String_t* L_8;
		L_8 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_7, NULL);
		String_t* L_9;
		L_9 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_8, NULL);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___0_maxTryCount, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_maxTryCount;
		__this->____maxTryCount = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		int32_t L_1 = __this->____maxTryCount;
		return (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxTryCount;
		int32_t L_1;
		L_1 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline(__this, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918 (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB7A6C364B0CEC17F2C93A0C52B13A3B1BD019D8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2;
		L_2 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Update_mD7D8EA32F19BAB45835F51ACA4C7E8FFF3F64E34 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	{
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_0 = __this->____scoreHolder;
		bool L_1;
		L_1 = ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_2 = __this->____timeKeeper;
		bool L_3;
		L_3 = TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B(L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_Initialize_m999312C5326837696D5D132C885AE1B00A2AE189 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, int32_t ___0_boardNo, String_t* ___1_hmacKey, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_boardNo;
		__this->____boardNo = L_0;
		String_t* L_1 = ___1_hmacKey;
		__this->____hmacKey = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmacKey), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard_AddScore_m75859FF83525E5CF1347D9B0F579F8977A292C33 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___0_score, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_0 = __this->____scoreHolder;
		float L_1 = ___0_score;
		int32_t L_2 = ___1_mode;
		bool L_3;
		L_3 = ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD(L_0, L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = __this->____boardNo;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = ___0_score;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB85624BCAD48B6F7D8D00D411E08DD68A288D4C1, L_6, L_9, NULL);
		G_B3_0 = L_10;
		goto IL_0047;
	}

IL_002c:
	{
		int32_t L_11 = __this->____boardNo;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		float L_14 = ___0_score;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE6512321DDCF3BDBF14F295A9AA72990C16BB671, L_13, L_16, NULL);
		G_B3_0 = L_17;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scoreboard_SendScoreEnumerator_mAC54B59A530E55D2826F66D0EED7631334F89691 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* L_0 = (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5*)il2cpp_codegen_object_new(U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5_il2cpp_TypeInfo_var);
		U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A(L_0, 0, NULL);
		U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* L_1 = L_0;
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, float ___0_score, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____boardNo;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB00E0785E64B18158E19EB8A0AC5A1EC6244BE79, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		V_5 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_7;
		L_7 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&___0_score), L_6, NULL);
		V_2 = L_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA9D807BE1EFECC03B3C177C5936DD36A2DA5FC05);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = V_1;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17 = V_2;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		String_t* L_19 = __this->____hmacKey;
		String_t* L_20;
		L_20 = Hmac_GetHmacSha256_m246B22C8EA73A9E6330380EC1869DE2F9FE5BFC2(L_18, L_19, NULL);
		V_3 = L_20;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_21 = (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)il2cpp_codegen_object_new(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6(L_21, NULL);
		V_4 = L_21;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_22 = V_4;
		String_t* L_23 = V_2;
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(L_22, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_23, NULL);
		String_t* L_24 = V_0;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_25 = V_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26;
		L_26 = UnityWebRequest_Post_m90D1692FE21DF17CB3DEB0948D0359B778404373(L_24, L_25, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = L_26;
		String_t* L_28 = V_3;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_27, _stringLiteralBD382393F0585E3C74EC569E3DCBD6A4AB4EE565, L_28, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = L_27;
		String_t* L_30 = V_1;
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_29, _stringLiteral2AA7999C60E7B451F14EE9279768642D133AF4E0, L_30, NULL);
		return L_29;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoreboard__ctor_m31C8298D2444CAEEA06AE2A3A910F26AB58D5630 (Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_0 = (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0*)il2cpp_codegen_object_new(RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0_il2cpp_TypeInfo_var);
		RetryCounter__ctor_m1B0542EEA81D2AA15E8A375DEFAA98221BCE75B7(L_0, 2, NULL);
		__this->____retryCounter = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____retryCounter), (void*)L_0);
		ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_1 = (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5*)il2cpp_codegen_object_new(ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5_il2cpp_TypeInfo_var);
		ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D(L_1, NULL);
		__this->____scoreHolder = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scoreHolder), (void*)L_1);
		TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_2 = (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A*)il2cpp_codegen_object_new(TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A_il2cpp_TypeInfo_var);
		TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB(L_2, 6, NULL);
		__this->____timeKeeper = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timeKeeper), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10__ctor_mF0215622D20ADE7B67292E80C665294CEA1BD80A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6(__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendScoreEnumeratorU3Ed__10_MoveNext_m25FA34867334FDB58D456BA840FA0F6B4F51001A (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09BF09881179677B8850817E265CF7C67AA42804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* V_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_023f:
			{
				U3CSendScoreEnumeratorU3Ed__10_System_IDisposable_Dispose_m768B2D5F4FB5BFCBAF7EE1BEFC83336411429F02(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0118_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0246;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state = (-1);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_4 = V_2;
				TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* L_5 = L_4->____timeKeeper;
				TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443(L_5, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_6 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_7 = L_6->____scoreHolder;
				float L_8;
				L_8 = ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B(L_7, NULL);
				__this->___U3CscoreU3E5__2 = L_8;
				bool L_9;
				L_9 = Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF(NULL);
				if (!L_9)
				{
					goto IL_008b_1;
				}
			}
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_10 = V_2;
				int32_t L_11 = L_10->____boardNo;
				int32_t L_12 = L_11;
				RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
				float L_14 = __this->___U3CscoreU3E5__2;
				float L_15 = L_14;
				RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
				String_t* L_17;
				L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6065F5B01A323AEDEBDB16BF07D09128C140B9D1, L_13, L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_18 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_19 = L_18->____retryCounter;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_19, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_20 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_21 = L_20->____scoreHolder;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_21, NULL);
				V_0 = (bool)0;
				goto IL_0246;
			}

IL_008b_1:
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_22 = V_2;
				int32_t L_23 = L_22->____boardNo;
				int32_t L_24 = L_23;
				RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
				float L_26 = __this->___U3CscoreU3E5__2;
				float L_27 = L_26;
				RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_29 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_30 = L_29->____retryCounter;
				int32_t L_31;
				L_31 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(L_30, NULL);
				if ((((int32_t)L_31) > ((int32_t)0)))
				{
					G_B7_0 = L_28;
					G_B7_1 = L_25;
					G_B7_2 = _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
					goto IL_00bb_1;
				}
				G_B6_0 = L_28;
				G_B6_1 = L_25;
				G_B6_2 = _stringLiteral101C9F95FD7340DF70FED897219FA76BEE74D717;
			}
			{
				G_B8_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				G_B8_1 = G_B6_0;
				G_B8_2 = G_B6_1;
				G_B8_3 = G_B6_2;
				goto IL_00d5_1;
			}

IL_00bb_1:
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_32 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_33 = L_32->____retryCounter;
				int32_t L_34;
				L_34 = RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline(L_33, NULL);
				int32_t L_35 = L_34;
				RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
				String_t* L_37;
				L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral09BF09881179677B8850817E265CF7C67AA42804, L_36, NULL);
				G_B8_0 = L_37;
				G_B8_1 = G_B7_0;
				G_B8_2 = G_B7_1;
				G_B8_3 = G_B7_2;
			}

IL_00d5_1:
			{
				String_t* L_38;
				L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B8_3, G_B8_2, G_B8_1, G_B8_0, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_39 = V_2;
				float L_40 = __this->___U3CscoreU3E5__2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41;
				L_41 = Scoreboard_CreateRequest_m4EEC018F9BED53445DB40562B450D4A64355173B(L_39, L_40, NULL);
				__this->___U3CrequestU3E5__3 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3), (void*)L_41);
				__this->___U3CU3E1__state = ((int32_t)-3);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___U3CrequestU3E5__3;
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_43;
				L_43 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_42, NULL);
				__this->___U3CU3E2__current = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_43);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_0246;
			}

IL_0118_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_44 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_45 = L_44->____retryCounter;
				RetryCounter_Increment_m5BA02669119E968EFFC9F6993039955BEEA83918(L_45, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CrequestU3E5__3;
				int32_t L_47;
				L_47 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_46, NULL);
				if ((!(((uint32_t)L_47) == ((uint32_t)1))))
				{
					goto IL_01a8_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_50 = V_2;
				int32_t L_51 = L_50->____boardNo;
				int32_t L_52 = L_51;
				RuntimeObject* L_53 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_52);
				ArrayElementTypeCheck (L_49, L_53);
				(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_49;
				float L_55 = __this->___U3CscoreU3E5__2;
				float L_56 = L_55;
				RuntimeObject* L_57 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_56);
				ArrayElementTypeCheck (L_54, L_57);
				(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_57);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_54;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_59 = __this->___U3CrequestU3E5__3;
				int64_t L_60;
				L_60 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_61);
				ArrayElementTypeCheck (L_58, L_62);
				(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_62);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_58;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_64 = __this->___U3CrequestU3E5__3;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_65;
				L_65 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_64, NULL);
				String_t* L_66;
				L_66 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_65, NULL);
				ArrayElementTypeCheck (L_63, L_66);
				(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_66);
				String_t* L_67;
				L_67 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5BCE6EAE7836EC0AD52C081AF09B2B99CF9D18A8, L_63, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_67, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_68 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_69 = L_68->____retryCounter;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_69, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_70 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_71 = L_70->____scoreHolder;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_71, NULL);
				goto IL_0212_1;
			}

IL_01a8_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_74 = V_2;
				int32_t L_75 = L_74->____boardNo;
				int32_t L_76 = L_75;
				RuntimeObject* L_77 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_76);
				ArrayElementTypeCheck (L_73, L_77);
				(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_77);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_73;
				float L_79 = __this->___U3CscoreU3E5__2;
				float L_80 = L_79;
				RuntimeObject* L_81 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_80);
				ArrayElementTypeCheck (L_78, L_81);
				(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_81);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = L_78;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_83 = __this->___U3CrequestU3E5__3;
				int64_t L_84;
				L_84 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_83, NULL);
				int64_t L_85 = L_84;
				RuntimeObject* L_86 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_85);
				ArrayElementTypeCheck (L_82, L_86);
				(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_86);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_82;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_88 = __this->___U3CrequestU3E5__3;
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_89;
				L_89 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_88, NULL);
				String_t* L_90;
				L_90 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_89, NULL);
				ArrayElementTypeCheck (L_87, L_90);
				(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_90);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_87;
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_92 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_93 = L_92->____retryCounter;
				int32_t L_94;
				L_94 = RetryCounter_get_RemainCount_m640313DB6C8B6C1197ABFD466EFCAC76D8F9A64F(L_93, NULL);
				int32_t L_95 = L_94;
				RuntimeObject* L_96 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_95);
				ArrayElementTypeCheck (L_91, L_96);
				(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_96);
				String_t* L_97;
				L_97 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralAF114CCDDFED85AD37A859C38E4EE932B2D835F8, L_91, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_97, NULL);
			}

IL_0212_1:
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_98 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_99 = L_98->____retryCounter;
				bool L_100;
				L_100 = RetryCounter_get_CanRetry_m461A6FD6E16A480DCB99D1F4DE54D46D7F7F2D09(L_99, NULL);
				if (L_100)
				{
					goto IL_0235_1;
				}
			}
			{
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_101 = V_2;
				ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* L_102 = L_101->____scoreHolder;
				ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4(L_102, NULL);
				Scoreboard_t8D89A8C7422A737EB4FAC3FDFC8072D411604CF1* L_103 = V_2;
				RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* L_104 = L_103->____retryCounter;
				RetryCounter_Reset_m5BCA1CC42DE65F5143C159C89886A81F06BF89FA(L_104, NULL);
			}

IL_0235_1:
			{
				V_0 = (bool)0;
				U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6(__this, NULL);
				goto IL_0246;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0246:
	{
		bool L_105 = V_0;
		return L_105;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_U3CU3Em__Finally1_m2B3E2F7A24A57CE9FFEBF888E013C2FEA41A83D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__3;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScoreEnumeratorU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C36CBB51B9B67CA8A193780403E93A51C3D045F (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_Reset_m3462728F20E5906C7733D60D619B6516725875DE_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendScoreEnumeratorU3Ed__10_System_Collections_IEnumerator_get_Current_m06F3127B2C9FCD702D429BD6A9315AC2D75BB9D6 (U3CSendScoreEnumeratorU3Ed__10_tFD30ED012FEAACC404636B0492B38C6B3078C8B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->____currentScore);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_0, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_2 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->____currentScore);
		float L_3;
		L_3 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_2, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral979D01B9ED0B114E874D86D861AC3C0E18F867C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ScoreHolder_get_Score_mC1E799FA0B47C40A5E864199A0279281A1998D0B_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CScoreChangedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CScoreChangedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScoreHolder_SetNewScore_m3801928CBB8DDCDEC0B0A5665A1F0C7ED01750AD (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, float ___0_score, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_0 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->____currentScore);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_0, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = ___1_mode;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___1_mode;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_4 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->____currentScore);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_4, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6 = ___0_score;
		if ((((float)L_5) < ((float)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		int32_t L_7 = ___1_mode;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_8 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->____currentScore);
		float L_9;
		L_9 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_8, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_10 = ___0_score;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0049;
		}
	}

IL_0034:
	{
		float L_11 = ___0_score;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_12), L_11, Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->____currentScore = L_12;
		ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline(__this, (bool)1, NULL);
		return (bool)1;
	}

IL_0049:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder_ResetChangedFlag_mAE9DB8664BD537AA4411BDA80F5055ABC9C27DB4 (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline(__this, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreHolder__ctor_mC20FE7D9A20063C2E09D918ED6D541072384574D (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper__ctor_m2A77F86F234747D4EDD9A99E9E25A75596951FDB (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_intervalSeconds, const RuntimeMethod* method) 
{
	{
		__this->____lastSentTime = ((int32_t)-2147483648LL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_intervalSeconds;
		__this->____intervalSeconds = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mA51540216EC6BE1B6A1B2AEC1A0D0A00FC1CE70B (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		bool L_1;
		L_1 = TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeKeeper_IsBusy_mE98579890EF83C339DCBBE067D7889CDD2265CE4 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_now, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastSentTime;
		int32_t L_1 = __this->____intervalSeconds;
		int32_t L_2 = ___0_now;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m8CE941D600B5672FA220D96132B65C4B12430443 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F(NULL);
		TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730 (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_now, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_now;
		__this->____lastSentTime = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_GetCurrentUnixTime_m7CC8832A0E762A24580A43B6315E13A5D2E7FB3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnixTime_ToUnixTime_m855D1AE257886697DC5627F90980C2BFD60B0539 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_targetTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___0_targetTime), NULL);
		___0_targetTime = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___0_targetTime;
		il2cpp_codegen_runtime_class_init_inline(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields*)il2cpp_codegen_static_fields_for(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var))->___UnixEpoch;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnixTime__cctor_mB0C754AE3A9BAE201E64E38C7DD63A1D7036A554 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		((UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_StaticFields*)il2cpp_codegen_static_fields_for(UnixTime_tD5E6822F25B1E014339B0B04FDF2D69633B16217_il2cpp_TypeInfo_var))->___UnixEpoch = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsEditor_mE8593ACEA2CD68B2CB5CDA1840D74E37FF486DDF (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RetryCounter_get_Count_mCD4165B38EAF234D1BC6024D25D626864B75A780_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RetryCounter_set_Count_m56F735BEB01F86A6F6A21C9127BCD55D8BD31F28_inline (RetryCounter_t1CFB022BE6994C941C13B975FA361221944FF6E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScoreHolder_get_ScoreChanged_mEAC5686B186DBC59F91E66ADB9BB8942A93CAF73_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CScoreChangedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreHolder_set_ScoreChanged_m934B70B8DDF2ED5C38076E99204F0FBA202328C6_inline (ScoreHolder_t6976DEBF0D46D32DD01E810A6384DE85F84804B5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CScoreChangedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeKeeper_Reset_m9AD55BFCE415929F6624E9D5B6C6C3BA9D614730_inline (TimeKeeper_t2E8B5AB15D366832D6CF0B3F133EB8F1AEF2A21A* __this, int32_t ___0_now, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_now;
		__this->____lastSentTime = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
