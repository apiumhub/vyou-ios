#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VYouVYou, VYouVYouCredentials, VYouKotlinUnit, NSError, VYouVYouResetPasswordParams, VYouVYouSignInParams, VYouVYouSignInSocialParams, VYouVYouSignUpParams, VYouVYouSignUpPasswordParams, VYouVYouSignUpVerifyParams, VYouVYouBuilder, VYouVYouError, VYouVYouLogLevel, VYouKoin_coreKoin, VYouVYouEditProfileParams, VYouVYouProfile, VYouVYouConfig, VYouVYouCredentialsCompanion, VYouKotlinThrowable, VYouKotlinArray<T>, VYouKotlinError, VYouVYouErrorCode, VYouKotlinEnumCompanion, VYouKotlinEnum<E>, VYouKtor_client_loggingLogLevel, VYouCredentialsDTOCompanion, VYouCredentialsDTO, VYouProfileDTOCompanion, VYouProfileDTO, VYouProfileEditDTOCompanion, VYouProfileEditDTO, VYouKtor_client_coreHttpClient, VYouKtor_client_coreHttpResponse, VYouPKCE, VYouValidationCompanion, VYouValidationParamRules, VYouValidationRule, VYouKotlinx_serialization_jsonJson, VYouCredentialsStorageRepositoryCompanion, VYouResetPasswordDTOCompanion, VYouResetPasswordDTO, VYouKoin_coreModule, VYouKotlinException, VYouKotlinRuntimeException, VYouKotlinIllegalStateException, VYouKoin_coreScope, VYouKoin_coreParametersHolder, VYouKotlinLazyThreadSafetyMode, VYouKoin_coreLogger, VYouKoin_coreInstanceRegistry, VYouKoin_corePropertyRegistry, VYouKoin_coreScopeRegistry, VYouKtor_client_coreHttpClientEngineConfig, VYouKtor_client_coreHttpClientConfig<T>, VYouKtor_eventsEvents, VYouKtor_client_coreHttpReceivePipeline, VYouKtor_client_coreHttpRequestPipeline, VYouKtor_client_coreHttpResponsePipeline, VYouKtor_client_coreHttpSendPipeline, VYouKtor_client_coreHttpClientCall, VYouKtor_utilsGMTDate, VYouKtor_httpHttpStatusCode, VYouKtor_httpHttpProtocolVersion, VYouKotlinx_serialization_coreSerializersModule, VYouKotlinx_serialization_jsonJsonConfiguration, VYouKotlinx_serialization_jsonJsonDefault, VYouKotlinx_serialization_jsonJsonElement, VYouKoin_coreInstanceFactory<T>, VYouKotlinPair<__covariant A, __covariant B>, VYouKoin_coreScopeDSL, VYouKoin_coreSingleInstanceFactory<T>, VYouKoin_coreParametersHolderCompanion, VYouKoin_coreLevel, VYouKoin_coreScopeRegistryCompanion, VYouKotlinx_serialization_coreSerialKind, VYouKotlinNothing, VYouKtor_client_coreHttpRequestData, VYouKtor_client_coreHttpResponseData, VYouKotlinx_coroutines_coreCoroutineDispatcher, VYouKtor_client_coreProxyConfig, VYouKtor_utilsAttributeKey<T>, VYouKtor_eventsEventDefinition<T>, VYouKtor_utilsPipelinePhase, VYouKtor_utilsPipeline<TSubject, TContext>, VYouKtor_client_coreHttpReceivePipelinePhases, VYouKtor_client_coreHttpRequestPipelinePhases, VYouKtor_client_coreHttpRequestBuilder, VYouKtor_client_coreHttpResponsePipelinePhases, VYouKtor_client_coreHttpResponseContainer, VYouKtor_client_coreHttpSendPipelinePhases, VYouKtor_client_coreHttpClientCallCompanion, VYouKtor_utilsTypeInfo, VYouKtor_ioMemory, VYouKtor_ioChunkBuffer, VYouKotlinByteArray, VYouKtor_ioByteReadPacket, VYouKtor_utilsGMTDateCompanion, VYouKtor_utilsWeekDay, VYouKtor_utilsMonth, VYouKtor_httpHttpStatusCodeCompanion, VYouKtor_httpHttpProtocolVersionCompanion, VYouKotlinx_serialization_jsonJsonElementCompanion, VYouKoin_coreBeanDefinition<T>, VYouKoin_coreInstanceFactoryCompanion, VYouKoin_coreInstanceContext, VYouKtor_httpUrl, VYouKtor_httpHttpMethod, VYouKtor_httpOutgoingContent, VYouKotlinAbstractCoroutineContextElement, VYouKotlinx_coroutines_coreCoroutineDispatcherKey, VYouKtor_httpHeadersBuilder, VYouKtor_client_coreHttpRequestBuilderCompanion, VYouKtor_httpURLBuilder, VYouKtor_ioMemoryCompanion, VYouKtor_ioBufferCompanion, VYouKtor_ioBuffer, VYouKtor_ioChunkBufferCompanion, VYouKotlinByteIterator, VYouKtor_ioInputCompanion, VYouKtor_ioInput, VYouKtor_ioByteReadPacketCompanion, VYouKtor_utilsWeekDayCompanion, VYouKtor_utilsMonthCompanion, VYouKoin_coreKind, VYouKoin_coreCallbacks<T>, VYouKtor_httpUrlCompanion, VYouKtor_httpURLProtocol, VYouKtor_httpHttpMethodCompanion, VYouKtor_httpContentType, VYouKotlinCancellationException, VYouKotlinAbstractCoroutineContextKey<B, E>, VYouKtor_utilsStringValuesBuilderImpl, VYouKtor_httpURLBuilderCompanion, VYouKotlinKTypeProjection, VYouKtor_httpURLProtocolCompanion, VYouKtor_httpHeaderValueParam, VYouKtor_httpHeaderValueWithParametersCompanion, VYouKtor_httpHeaderValueWithParameters, VYouKtor_httpContentTypeCompanion, VYouKotlinKVariance, VYouKotlinKTypeProjectionCompanion, VYouKotlinx_coroutines_coreAtomicDesc, VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, VYouKotlinx_coroutines_coreAtomicOp<__contravariant T>, VYouKotlinx_coroutines_coreOpDescriptor, VYouKotlinx_coroutines_coreLockFreeLinkedListNode, VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, VYouKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol VYouKoin_coreKoinComponent, VYouKotlinx_serialization_coreKSerializer, VYouKotlinComparable, VYouKotlinSuspendFunction0, VYouCredentialsRepository, VYouMultiplatform_settingsSettings, VYouKoin_coreKoinScopeComponent, VYouKoin_coreQualifier, VYouKotlinKClass, VYouKotlinLazy, VYouKotlinx_serialization_coreEncoder, VYouKotlinx_serialization_coreSerialDescriptor, VYouKotlinx_serialization_coreSerializationStrategy, VYouKotlinx_serialization_coreDecoder, VYouKotlinx_serialization_coreDeserializationStrategy, VYouKotlinIterator, VYouKotlinCoroutineContext, VYouKotlinx_coroutines_coreCoroutineScope, VYouKtor_ioCloseable, VYouKtor_client_coreHttpClientEngine, VYouKtor_client_coreHttpClientEngineCapability, VYouKtor_utilsAttributes, VYouKotlinFunction, VYouKtor_httpHeaders, VYouKtor_httpHttpMessage, VYouKtor_ioByteReadChannel, VYouKotlinx_serialization_coreSerialFormat, VYouKotlinx_serialization_coreStringFormat, VYouKoin_coreScopeCallback, VYouKotlinKDeclarationContainer, VYouKotlinKAnnotatedElement, VYouKotlinKClassifier, VYouKotlinx_serialization_coreCompositeEncoder, VYouKotlinAnnotation, VYouKotlinx_serialization_coreCompositeDecoder, VYouKotlinCoroutineContextElement, VYouKotlinCoroutineContextKey, VYouKtor_client_coreHttpClientPlugin, VYouKotlinx_coroutines_coreDisposableHandle, VYouKotlinSuspendFunction2, VYouKotlinMapEntry, VYouKtor_utilsStringValues, VYouKtor_client_coreHttpRequest, VYouKtor_ioReadSession, VYouKotlinSuspendFunction1, VYouKotlinAppendable, VYouKotlinx_serialization_coreSerializersModuleCollector, VYouKotlinx_coroutines_coreJob, VYouKotlinContinuation, VYouKotlinContinuationInterceptor, VYouKotlinx_coroutines_coreRunnable, VYouKtor_httpHttpMessageBuilder, VYouKotlinKType, VYouKtor_ioObjectPool, VYouKtor_httpParameters, VYouKotlinx_coroutines_coreChildHandle, VYouKotlinx_coroutines_coreChildJob, VYouKotlinSequence, VYouKotlinx_coroutines_coreSelectClause0, VYouKtor_utilsStringValuesBuilder, VYouKtor_httpParametersBuilder, VYouKotlinx_coroutines_coreParentJob, VYouKotlinx_coroutines_coreSelectInstance;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface VYouBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface VYouBase (VYouBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface VYouMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface VYouMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorVYouKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface VYouNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface VYouByte : VYouNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface VYouUByte : VYouNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface VYouShort : VYouNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface VYouUShort : VYouNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface VYouInt : VYouNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface VYouUInt : VYouNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface VYouLong : VYouNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface VYouULong : VYouNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface VYouFloat : VYouNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface VYouDouble : VYouNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface VYouBoolean : VYouNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYou")))
@interface VYouVYou : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)vYou __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouVYou *shared __attribute__((swift_name("shared")));
- (void)clearCredentials __attribute__((swift_name("clearCredentials()")));
- (VYouVYouCredentials * _Nullable)credentials __attribute__((swift_name("credentials()")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)isValidToken __attribute__((swift_name("isValidToken()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenWithCompletionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))refreshTokenNative __attribute__((swift_name("refreshTokenNative()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetPasswordParams:(VYouVYouResetPasswordParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetPassword(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))resetPasswordNativeParams:(VYouVYouResetPasswordParams *)params __attribute__((swift_name("resetPasswordNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInParams:(VYouVYouSignInParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signIn(params:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInAppleParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInApple(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInAppleNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInAppleNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInFacebookParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInFacebook(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInFacebookNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInFacebookNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInGoogleParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInGoogle(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInGoogleNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInGoogleNative(params:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInNativeParams:(VYouVYouSignInParams *)params __attribute__((swift_name("signInNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signOutWithCompletionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signOut(completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signOutNative __attribute__((swift_name("signOutNative()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpParams:(VYouVYouSignUpParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUp(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpNativeParams:(VYouVYouSignUpParams *)params __attribute__((swift_name("signUpNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpPasswordsParams:(VYouVYouSignUpPasswordParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUpPasswords(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpPasswordsNativeParams:(VYouVYouSignUpPasswordParams *)params __attribute__((swift_name("signUpPasswordsNative(params:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpVerifyParams:(VYouVYouSignUpVerifyParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUpVerify(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpVerifyNativeParams:(VYouVYouSignUpVerifyParams *)params __attribute__((swift_name("signUpVerifyNative(params:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYou.Builder")))
@interface VYouVYouBuilder : VYouBase
- (instancetype)initWithServerUrl:(NSString *)serverUrl clientId:(NSString *)clientId __attribute__((swift_name("init(serverUrl:clientId:)"))) __attribute__((objc_designated_initializer));
- (VYouVYouBuilder *)addOnRefreshTokenFailureBlock:(void (^)(VYouVYouError *))block __attribute__((swift_name("addOnRefreshTokenFailure(block:)")));
- (VYouVYouBuilder *)addOnSignOutBlock:(void (^)(void))block __attribute__((swift_name("addOnSignOut(block:)")));
- (void)build __attribute__((swift_name("build()")));
- (VYouVYouBuilder *)enableNetworkLogsLevel:(VYouVYouLogLevel *)level __attribute__((swift_name("enableNetworkLogs(level:)")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol VYouKoin_coreKoinComponent
@required
- (VYouKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouClient")))
@interface VYouVYouClient : VYouBase <VYouKoin_coreKoinComponent>
- (void)clearCredentials __attribute__((swift_name("clearCredentials()")));
- (VYouVYouCredentials * _Nullable)credentials __attribute__((swift_name("credentials()")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)editProfileParams:(VYouVYouEditProfileParams *)params completionHandler:(void (^)(VYouVYouProfile * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("editProfile(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouProfile *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))editProfileNativeParams:(VYouVYouEditProfileParams *)params __attribute__((swift_name("editProfileNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileWithCompletionHandler:(void (^)(VYouVYouProfile * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfile(completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouProfile *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))getProfileNative __attribute__((swift_name("getProfileNative()")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
- (BOOL)isValidToken __attribute__((swift_name("isValidToken()")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenWithCompletionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))refreshTokenNative __attribute__((swift_name("refreshTokenNative()")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetPasswordParams:(VYouVYouResetPasswordParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetPassword(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))resetPasswordNativeParams:(VYouVYouResetPasswordParams *)params __attribute__((swift_name("resetPasswordNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInParams:(VYouVYouSignInParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signIn(params:completionHandler:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInAppleParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInApple(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInAppleNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInAppleNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInFacebookParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInFacebook(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInFacebookNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInFacebookNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInGoogleParams:(VYouVYouSignInSocialParams *)params completionHandler:(void (^)(VYouVYouCredentials * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInGoogle(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInGoogleNativeParams:(VYouVYouSignInSocialParams *)params __attribute__((swift_name("signInGoogleNative(params:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouVYouCredentials *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signInNativeParams:(VYouVYouSignInParams *)params __attribute__((swift_name("signInNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signOutWithCompletionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signOut(completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signOutNative __attribute__((swift_name("signOutNative()")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpParams:(VYouVYouSignUpParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUp(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpNativeParams:(VYouVYouSignUpParams *)params __attribute__((swift_name("signUpNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpPasswordsParams:(VYouVYouSignUpPasswordParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUpPasswords(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpPasswordsNativeParams:(VYouVYouSignUpPasswordParams *)params __attribute__((swift_name("signUpPasswordsNative(params:)")));

/**
 @note This method converts instances of VYouError, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpVerifyParams:(VYouVYouSignUpVerifyParams *)params completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUpVerify(params:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))signUpVerifyNativeParams:(VYouVYouSignUpVerifyParams *)params __attribute__((swift_name("signUpVerifyNative(params:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouConfig")))
@interface VYouVYouConfig : VYouBase
- (instancetype)initWithServerUrl:(NSString *)serverUrl clientId:(NSString *)clientId __attribute__((swift_name("init(serverUrl:clientId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouVYouConfig *)doCopyServerUrl:(NSString *)serverUrl clientId:(NSString *)clientId __attribute__((swift_name("doCopy(serverUrl:clientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *serverUrl __attribute__((swift_name("serverUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouCredentials")))
@interface VYouVYouCredentials : VYouBase
- (instancetype)initWithAccessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn idToken:(NSString *)idToken refreshToken:(NSString *)refreshToken scope:(NSString *)scope tenantCompliant:(BOOL)tenantCompliant tenantConsentCompliant:(BOOL)tenantConsentCompliant tokenType:(NSString *)tokenType __attribute__((swift_name("init(accessToken:expiresIn:idToken:refreshToken:scope:tenantCompliant:tenantConsentCompliant:tokenType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouVYouCredentialsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (VYouVYouCredentials *)doCopyAccessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn idToken:(NSString *)idToken refreshToken:(NSString *)refreshToken scope:(NSString *)scope tenantCompliant:(BOOL)tenantCompliant tenantConsentCompliant:(BOOL)tenantConsentCompliant tokenType:(NSString *)tokenType __attribute__((swift_name("doCopy(accessToken:expiresIn:idToken:refreshToken:scope:tenantCompliant:tenantConsentCompliant:tokenType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) int64_t expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) NSString *scope __attribute__((swift_name("scope")));
@property (readonly) BOOL tenantCompliant __attribute__((swift_name("tenantCompliant")));
@property (readonly) BOOL tenantConsentCompliant __attribute__((swift_name("tenantConsentCompliant")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouCredentials.Companion")))
@interface VYouVYouCredentialsCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouVYouCredentialsCompanion *shared __attribute__((swift_name("shared")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouEditProfileParams")))
@interface VYouVYouEditProfileParams : VYouBase
- (instancetype)initWithFields:(NSDictionary<NSString *, id> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)component1 __attribute__((swift_name("component1()")));
- (VYouVYouEditProfileParams *)doCopyFields:(NSDictionary<NSString *, id> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *fields __attribute__((swift_name("fields")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface VYouKotlinThrowable : VYouBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (VYouKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinError")))
@interface VYouKotlinError : VYouKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("VYouError")))
@interface VYouVYouError : VYouKotlinError
- (instancetype)initWithCode:(VYouVYouErrorCode *)code message:(NSString * _Nullable)message status:(int32_t)status __attribute__((swift_name("init(code:message:status:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) VYouVYouErrorCode *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol VYouKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface VYouKotlinEnum<E> : VYouBase <VYouKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouErrorCode")))
@interface VYouVYouErrorCode : VYouKotlinEnum<VYouVYouErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouVYouErrorCode *instance __attribute__((swift_name("instance")));
@property (class, readonly) VYouVYouErrorCode *loginSocialCanceled __attribute__((swift_name("loginSocialCanceled")));
@property (class, readonly) VYouVYouErrorCode *loginSocialError __attribute__((swift_name("loginSocialError")));
@property (class, readonly) VYouVYouErrorCode *validationNotMatchingPasswords __attribute__((swift_name("validationNotMatchingPasswords")));
@property (class, readonly) VYouVYouErrorCode *validationParams __attribute__((swift_name("validationParams")));
@property (class, readonly) VYouVYouErrorCode *networkRequestError __attribute__((swift_name("networkRequestError")));
@property (class, readonly) VYouVYouErrorCode *networkServerError __attribute__((swift_name("networkServerError")));
@property (class, readonly) VYouVYouErrorCode *networkRefreshTokenExpired __attribute__((swift_name("networkRefreshTokenExpired")));
@property (class, readonly) VYouVYouErrorCode *networkError __attribute__((swift_name("networkError")));
+ (VYouKotlinArray<VYouVYouErrorCode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouLogLevel")))
@interface VYouVYouLogLevel : VYouKotlinEnum<VYouVYouLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouVYouLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) VYouVYouLogLevel *headers __attribute__((swift_name("headers")));
@property (class, readonly) VYouVYouLogLevel *body __attribute__((swift_name("body")));
@property (class, readonly) VYouVYouLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) VYouVYouLogLevel *none __attribute__((swift_name("none")));
+ (VYouKotlinArray<VYouVYouLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) VYouKtor_client_loggingLogLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouProfile")))
@interface VYouVYouProfile : VYouBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email fields:(NSDictionary<NSString *, NSString *> *)fields tenantCompliant:(BOOL)tenantCompliant tenantRoles:(NSArray<NSString *> *)tenantRoles __attribute__((swift_name("init(id:email:fields:tenantCompliant:tenantRoles:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (VYouVYouProfile *)doCopyId:(NSString *)id email:(NSString *)email fields:(NSDictionary<NSString *, NSString *> *)fields tenantCompliant:(BOOL)tenantCompliant tenantRoles:(NSArray<NSString *> *)tenantRoles __attribute__((swift_name("doCopy(id:email:fields:tenantCompliant:tenantRoles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSDictionary<NSString *, NSString *> *fields __attribute__((swift_name("fields")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL tenantCompliant __attribute__((swift_name("tenantCompliant")));
@property (readonly) NSArray<NSString *> *tenantRoles __attribute__((swift_name("tenantRoles")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouResetPasswordParams")))
@interface VYouVYouResetPasswordParams : VYouBase
- (instancetype)initWithEmail:(NSString *)email __attribute__((swift_name("init(email:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (VYouVYouResetPasswordParams *)doCopyEmail:(NSString *)email __attribute__((swift_name("doCopy(email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouSignInParams")))
@interface VYouVYouSignInParams : VYouBase
- (instancetype)initWithUsername:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(username:password:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouVYouSignInParams *)doCopyUsername:(NSString *)username password:(NSString *)password __attribute__((swift_name("doCopy(username:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouSignInSocialParams")))
@interface VYouVYouSignInSocialParams : VYouBase
- (instancetype)initWithAccessToken:(NSString *)accessToken __attribute__((swift_name("init(accessToken:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (VYouVYouSignInSocialParams *)doCopyAccessToken:(NSString *)accessToken __attribute__((swift_name("doCopy(accessToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouSignUpParams")))
@interface VYouVYouSignUpParams : VYouBase
- (instancetype)initWithUsername:(NSString *)username termsConditions:(BOOL)termsConditions privacyPolicy:(BOOL)privacyPolicy info:(BOOL)info __attribute__((swift_name("init(username:termsConditions:privacyPolicy:info:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (VYouVYouSignUpParams *)doCopyUsername:(NSString *)username termsConditions:(BOOL)termsConditions privacyPolicy:(BOOL)privacyPolicy info:(BOOL)info __attribute__((swift_name("doCopy(username:termsConditions:privacyPolicy:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL info __attribute__((swift_name("info")));
@property (readonly) BOOL privacyPolicy __attribute__((swift_name("privacyPolicy")));
@property (readonly) BOOL termsConditions __attribute__((swift_name("termsConditions")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouSignUpPasswordParams")))
@interface VYouVYouSignUpPasswordParams : VYouBase
- (instancetype)initWithPassword:(NSString *)password repeatPassword:(NSString *)repeatPassword code:(NSString *)code __attribute__((swift_name("init(password:repeatPassword:code:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (VYouVYouSignUpPasswordParams *)doCopyPassword:(NSString *)password repeatPassword:(NSString *)repeatPassword code:(NSString *)code __attribute__((swift_name("doCopy(password:repeatPassword:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *repeatPassword __attribute__((swift_name("repeatPassword")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VYouSignUpVerifyParams")))
@interface VYouVYouSignUpVerifyParams : VYouBase
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (VYouVYouSignUpVerifyParams *)doCopyCode:(NSString *)code __attribute__((swift_name("doCopy(code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsDTO")))
@interface VYouCredentialsDTO : VYouBase
- (instancetype)initWithAccessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn idToken:(NSString *)idToken refreshToken:(NSString *)refreshToken scope:(NSString *)scope tenantCompliant:(BOOL)tenantCompliant tenantConsentCompliant:(BOOL)tenantConsentCompliant tokenType:(NSString *)tokenType __attribute__((swift_name("init(accessToken:expiresIn:idToken:refreshToken:scope:tenantCompliant:tenantConsentCompliant:tokenType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouCredentialsDTOCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (VYouCredentialsDTO *)doCopyAccessToken:(NSString *)accessToken expiresIn:(int64_t)expiresIn idToken:(NSString *)idToken refreshToken:(NSString *)refreshToken scope:(NSString *)scope tenantCompliant:(BOOL)tenantCompliant tenantConsentCompliant:(BOOL)tenantConsentCompliant tokenType:(NSString *)tokenType __attribute__((swift_name("doCopy(accessToken:expiresIn:idToken:refreshToken:scope:tenantCompliant:tenantConsentCompliant:tokenType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VYouVYouCredentials *)toDomain __attribute__((swift_name("toDomain()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) int64_t expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) NSString *scope __attribute__((swift_name("scope")));
@property (readonly) BOOL tenantCompliant __attribute__((swift_name("tenantCompliant")));
@property (readonly) BOOL tenantConsentCompliant __attribute__((swift_name("tenantConsentCompliant")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsDTO.Companion")))
@interface VYouCredentialsDTOCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouCredentialsDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileDTO")))
@interface VYouProfileDTO : VYouBase
- (instancetype)initWithId:(NSString *)id email:(NSString *)email fields:(NSDictionary<NSString *, NSString *> *)fields tenantCompliant:(BOOL)tenantCompliant tenantRoles:(NSArray<NSString *> *)tenantRoles __attribute__((swift_name("init(id:email:fields:tenantCompliant:tenantRoles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouProfileDTOCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (VYouProfileDTO *)doCopyId:(NSString *)id email:(NSString *)email fields:(NSDictionary<NSString *, NSString *> *)fields tenantCompliant:(BOOL)tenantCompliant tenantRoles:(NSArray<NSString *> *)tenantRoles __attribute__((swift_name("doCopy(id:email:fields:tenantCompliant:tenantRoles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (VYouVYouProfile *)toDomain __attribute__((swift_name("toDomain()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSDictionary<NSString *, NSString *> *fields __attribute__((swift_name("fields")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL tenantCompliant __attribute__((swift_name("tenantCompliant")));
@property (readonly) NSArray<NSString *> *tenantRoles __attribute__((swift_name("tenantRoles")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileDTO.Companion")))
@interface VYouProfileDTOCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouProfileDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileEditDTO")))
@interface VYouProfileEditDTO : VYouBase
- (instancetype)initWithFields:(NSDictionary<NSString *, NSString *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouProfileEditDTOCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSString *> *)component1 __attribute__((swift_name("component1()")));
- (VYouProfileEditDTO *)doCopyFields:(NSDictionary<NSString *, NSString *> *)fields __attribute__((swift_name("doCopy(fields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *fields __attribute__((swift_name("fields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileEditDTO.Companion")))
@interface VYouProfileEditDTOCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouProfileEditDTOCompanion *shared __attribute__((swift_name("shared")));
- (VYouProfileEditDTO *)fromParams:(VYouVYouEditProfileParams *)params __attribute__((swift_name("from(params:)")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkHelper")))
@interface VYouNetworkHelper : VYouBase
- (instancetype)initWithClient:(VYouKtor_client_coreHttpClient *)client config:(VYouVYouConfig *)config __attribute__((swift_name("init(client:config:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)callFunc:(id<VYouKotlinSuspendFunction0>)func completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("call(func:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(id _Nullable, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))callNativeFunc:(id<VYouKotlinSuspendFunction0>)func __attribute__((swift_name("callNative(func:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createGetEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters completionHandler:(void (^)(VYouKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createGet(endpoint:parameters:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKtor_client_coreHttpResponse *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))createGetNativeEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters __attribute__((swift_name("createGetNative(endpoint:parameters:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPostEndpoint:(NSString *)endpoint dto:(id _Nullable)dto completionHandler:(void (^)(VYouKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPost(endpoint:dto:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKtor_client_coreHttpResponse *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))createPostNativeEndpoint:(NSString *)endpoint dto:(id _Nullable)dto __attribute__((swift_name("createPostNative(endpoint:dto:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPutEndpoint:(NSString *)endpoint dto:(id _Nullable)dto completionHandler:(void (^)(VYouKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPut(endpoint:dto:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKtor_client_coreHttpResponse *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))createPutNativeEndpoint:(NSString *)endpoint dto:(id _Nullable)dto __attribute__((swift_name("createPutNative(endpoint:dto:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endpoint:parameters:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(id _Nullable, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))getNativeEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters __attribute__((swift_name("getNative(endpoint:parameters:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getU(endpoint:parameters:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))getUNativeEndpoint:(NSString *)endpoint parameters:(NSDictionary<NSString *, NSString *> *)parameters __attribute__((swift_name("getUNative(endpoint:parameters:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndpoint:(NSString *)endpoint dto:(id _Nullable)dto completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endpoint:dto:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(id _Nullable, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))postNativeEndpoint:(NSString *)endpoint dto:(id _Nullable)dto __attribute__((swift_name("postNative(endpoint:dto:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUEndpoint:(NSString *)endpoint dto:(id _Nullable)dto completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postU(endpoint:dto:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(VYouKotlinUnit *, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))postUNativeEndpoint:(NSString *)endpoint dto:(id _Nullable)dto __attribute__((swift_name("postUNative(endpoint:dto:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndpoint:(NSString *)endpoint dto:(id _Nullable)dto completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endpoint:dto:completionHandler:)")));
- (VYouKotlinUnit *(^(^)(VYouKotlinUnit *(^)(id _Nullable, VYouKotlinUnit *), VYouKotlinUnit *(^)(NSError *, VYouKotlinUnit *)))(void))putNativeEndpoint:(NSString *)endpoint dto:(id _Nullable)dto __attribute__((swift_name("putNative(endpoint:dto:)")));
@property (readonly) VYouKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) VYouVYouConfig *config __attribute__((swift_name("config")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PKCE")))
@interface VYouPKCE : VYouBase
- (instancetype)initWithVerifier:(NSString *)verifier challenge:(NSString *)challenge __attribute__((swift_name("init(verifier:challenge:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouPKCE *)doCopyVerifier:(NSString *)verifier challenge:(NSString *)challenge __attribute__((swift_name("doCopy(verifier:challenge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSString *verifier __attribute__((swift_name("verifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validation")))
@interface VYouValidation : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VYouValidationCompanion *companion __attribute__((swift_name("companion")));
- (void)validateMatchingPasswordPassword:(id _Nullable)password repeatPassword:(id _Nullable)repeatPassword __attribute__((swift_name("validateMatchingPassword(password:repeatPassword:)")));
- (void)validateObjectRulesList:(NSArray<VYouValidationParamRules *> *)list __attribute__((swift_name("validateObjectRules(list:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validation.Companion")))
@interface VYouValidationCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouValidationCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationParamRules")))
@interface VYouValidationParamRules : VYouBase
- (instancetype)initWithParam:(id _Nullable)param rules:(NSArray<VYouValidationRule *> *)rules __attribute__((swift_name("init(param:rules:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<VYouValidationRule *> *)component2 __attribute__((swift_name("component2()")));
- (VYouValidationParamRules *)doCopyParam:(id _Nullable)param rules:(NSArray<VYouValidationRule *> *)rules __attribute__((swift_name("doCopy(param:rules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable param __attribute__((swift_name("param")));
@property (readonly) NSArray<VYouValidationRule *> *rules __attribute__((swift_name("rules")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationRule")))
@interface VYouValidationRule : VYouKotlinEnum<VYouValidationRule *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouValidationRule *isrequired __attribute__((swift_name("isrequired")));
@property (class, readonly) VYouValidationRule *isnumber __attribute__((swift_name("isnumber")));
@property (class, readonly) VYouValidationRule *isemail __attribute__((swift_name("isemail")));
@property (class, readonly) VYouValidationRule *isdate __attribute__((swift_name("isdate")));
@property (class, readonly) VYouValidationRule *istrue __attribute__((swift_name("istrue")));
@property (class, readonly) VYouValidationRule *islongenoughpassword __attribute__((swift_name("islongenoughpassword")));
@property (class, readonly) VYouValidationRule *isfairenoughpassword __attribute__((swift_name("isfairenoughpassword")));
+ (VYouKotlinArray<VYouValidationRule *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("CredentialsRepository")))
@protocol VYouCredentialsRepository
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)isLogged __attribute__((swift_name("isLogged()")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (VYouVYouCredentials * _Nullable)read __attribute__((swift_name("read()")));
- (void)saveCredentials:(VYouVYouCredentials *)credentials __attribute__((swift_name("save(credentials:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsStorageRepository")))
@interface VYouCredentialsStorageRepository : VYouBase <VYouCredentialsRepository>
- (instancetype)initWithSettings:(id<VYouMultiplatform_settingsSettings>)settings json:(VYouKotlinx_serialization_jsonJson *)json __attribute__((swift_name("init(settings:json:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouCredentialsStorageRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)isLogged __attribute__((swift_name("isLogged()")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (VYouVYouCredentials * _Nullable)read __attribute__((swift_name("read()")));
- (void)saveCredentials:(VYouVYouCredentials *)credentials __attribute__((swift_name("save(credentials:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsStorageRepository.Companion")))
@interface VYouCredentialsStorageRepositoryCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouCredentialsStorageRepositoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CREDENTIALS_KEY __attribute__((swift_name("CREDENTIALS_KEY")));
@property (readonly) NSString *NAME __attribute__((swift_name("NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordDTO")))
@interface VYouResetPasswordDTO : VYouBase
- (instancetype)initWithEmail:(NSString *)email clientId:(NSString *)clientId __attribute__((swift_name("init(email:clientId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouResetPasswordDTOCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouResetPasswordDTO *)doCopyEmail:(NSString *)email clientId:(NSString *)clientId __attribute__((swift_name("doCopy(email:clientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordDTO.Companion")))
@interface VYouResetPasswordDTOCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouResetPasswordDTOCompanion *shared __attribute__((swift_name("shared")));
- (VYouResetPasswordDTO *)fromParams:(VYouVYouResetPasswordParams *)params clientId:(NSString *)clientId __attribute__((swift_name("from(params:clientId:)")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureModuleKt")))
@interface VYouFeatureModuleKt : VYouBase
@property (class, readonly) VYouKoin_coreModule *featureModule __attribute__((swift_name("featureModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformModuleKt")))
@interface VYouPlatformModuleKt : VYouBase
+ (VYouKoin_coreModule *)platformModule __attribute__((swift_name("platformModule()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface VYouKotlinException : VYouKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface VYouKotlinRuntimeException : VYouKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface VYouKotlinIllegalStateException : VYouKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface VYouKotlinCancellationException : VYouKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface VYouKotlinUnit : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface VYouKoin_coreKoin : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (VYouKoin_coreScope *)createScopeT:(id<VYouKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (VYouKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (VYouKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (VYouKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<VYouKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<VYouKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (VYouKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (VYouKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<VYouKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (VYouKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (VYouKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<VYouKotlinLazy>)injectQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier mode:(VYouKotlinLazyThreadSafetyMode *)mode parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<VYouKotlinLazy>)injectOrNullQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier mode:(VYouKotlinLazyThreadSafetyMode *)mode parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<VYouKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(VYouKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<VYouKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) VYouKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) VYouKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) VYouKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) VYouKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol VYouKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<VYouKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<VYouKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol VYouKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<VYouKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<VYouKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol VYouKotlinx_serialization_coreKSerializer <VYouKotlinx_serialization_coreSerializationStrategy, VYouKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface VYouKotlinArray<T> : VYouBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(VYouInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<VYouKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface VYouKotlinEnumCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_loggingLogLevel")))
@interface VYouKtor_client_loggingLogLevel : VYouKotlinEnum<VYouKtor_client_loggingLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouKtor_client_loggingLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) VYouKtor_client_loggingLogLevel *headers __attribute__((swift_name("headers")));
@property (class, readonly) VYouKtor_client_loggingLogLevel *body __attribute__((swift_name("body")));
@property (class, readonly) VYouKtor_client_loggingLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) VYouKtor_client_loggingLogLevel *none __attribute__((swift_name("none")));
+ (VYouKotlinArray<VYouKtor_client_loggingLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) BOOL body __attribute__((swift_name("body")));
@property (readonly) BOOL headers __attribute__((swift_name("headers")));
@property (readonly) BOOL info __attribute__((swift_name("info")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol VYouKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<VYouKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol VYouKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface VYouKtor_client_coreHttpClient : VYouBase <VYouKotlinx_coroutines_coreCoroutineScope, VYouKtor_ioCloseable>
- (instancetype)initWithEngine:(id<VYouKtor_client_coreHttpClientEngine>)engine userConfig:(VYouKtor_client_coreHttpClientConfig<VYouKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (VYouKtor_client_coreHttpClient *)configBlock:(void (^)(VYouKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<VYouKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<VYouKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<VYouKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) VYouKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) VYouKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) VYouKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) VYouKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) VYouKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) VYouKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol VYouKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol VYouKotlinSuspendFunction0 <VYouKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol VYouKtor_httpHttpMessage
@required
@property (readonly) id<VYouKtor_httpHeaders> headers_ __attribute__((swift_name("headers_")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface VYouKtor_client_coreHttpResponse : VYouBase <VYouKtor_httpHttpMessage, VYouKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<VYouKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) VYouKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) VYouKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) VYouKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol VYouMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (VYouBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (VYouDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (VYouFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (VYouInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (VYouLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol VYouKotlinx_serialization_coreSerialFormat
@required
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol VYouKotlinx_serialization_coreStringFormat <VYouKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface VYouKotlinx_serialization_jsonJson : VYouBase <VYouKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(VYouKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(VYouKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(VYouKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (VYouKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (VYouKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) VYouKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface VYouKoin_coreModule : VYouBase
- (instancetype)initWithCreatedAtStart:(BOOL)createdAtStart __attribute__((swift_name("init(createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (VYouKotlinPair<VYouKoin_coreModule *, VYouKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSArray<VYouKoin_coreModule *> *)plusModules:(NSArray<VYouKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<VYouKoin_coreModule *> *)plusModule:(VYouKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<VYouKoin_coreQualifier>)qualifier scopeSet:(void (^)(VYouKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(VYouKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (VYouKotlinPair<VYouKoin_coreModule *, VYouKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BOOL createdAtStart __attribute__((swift_name("createdAtStart")));
@property (readonly) VYouMutableSet<VYouKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface VYouKoin_coreScope : VYouBase
- (instancetype)initWithScopeQualifier:(id<VYouKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(VYouKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<VYouKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (VYouKoin_coreScope *)doCopyScopeQualifier:(id<VYouKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(VYouKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<VYouKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<VYouKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (VYouKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (VYouKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<VYouKotlinLazy>)injectQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier mode:(VYouKotlinLazyThreadSafetyMode *)mode parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<VYouKotlinLazy>)injectOrNullQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier mode:(VYouKotlinLazyThreadSafetyMode *)mode parameters:(VYouKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(VYouKotlinArray<VYouKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<VYouKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(VYouKotlinArray<VYouKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<VYouKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) VYouKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<VYouKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol VYouKoin_coreKoinScopeComponent <VYouKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) VYouKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol VYouKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol VYouKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol VYouKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol VYouKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol VYouKotlinKClass <VYouKotlinKDeclarationContainer, VYouKotlinKAnnotatedElement, VYouKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface VYouKoin_coreParametersHolder : VYouBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (VYouKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<VYouKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<VYouKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (VYouKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size_ __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol VYouKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface VYouKotlinLazyThreadSafetyMode : VYouKotlinEnum<VYouKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) VYouKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) VYouKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (VYouKotlinArray<VYouKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface VYouKoin_coreLogger : VYouBase
- (instancetype)initWithLevel:(VYouKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(VYouKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(VYouKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(VYouKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property VYouKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface VYouKoin_coreInstanceRegistry : VYouBase
- (instancetype)initWith_koin:(VYouKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(VYouKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) VYouKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, VYouKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface VYouKoin_corePropertyRegistry : VYouBase
- (instancetype)initWith_koin:(VYouKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface VYouKoin_coreScopeRegistry : VYouBase
- (instancetype)initWith_koin:(VYouKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSArray<VYouKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) VYouKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<VYouKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol VYouKotlinx_serialization_coreEncoder
@required
- (id<VYouKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<VYouKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<VYouKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol VYouKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<VYouKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<VYouKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<VYouKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) VYouKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol VYouKotlinx_serialization_coreDecoder
@required
- (id<VYouKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<VYouKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (VYouKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol VYouKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol VYouKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<VYouKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<VYouKotlinCoroutineContextElement> _Nullable)getKey:(id<VYouKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<VYouKotlinCoroutineContext>)minusKeyKey:(id<VYouKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<VYouKotlinCoroutineContext>)plusContext:(id<VYouKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol VYouKtor_client_coreHttpClientEngine <VYouKotlinx_coroutines_coreCoroutineScope, VYouKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(VYouKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(VYouKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(VYouKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) VYouKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) VYouKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<VYouKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface VYouKtor_client_coreHttpClientEngineConfig : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property VYouKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface VYouKtor_client_coreHttpClientConfig<T> : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VYouKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(VYouKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<VYouKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(VYouKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(VYouKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol VYouKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol VYouKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(VYouKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(VYouKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey_:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key_:)")));
- (id)takeKey:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<VYouKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface VYouKtor_eventsEvents : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(VYouKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<VYouKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(VYouKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(VYouKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface VYouKtor_utilsPipeline<TSubject, TContext> : VYouBase
- (instancetype)initWithPhase:(VYouKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<VYouKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(VYouKotlinArray<VYouKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(VYouKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(VYouKtor_utilsPipelinePhase *)reference phase:(VYouKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(VYouKtor_utilsPipelinePhase *)reference phase:(VYouKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(VYouKtor_utilsPipelinePhase *)phase block:(id<VYouKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<VYouKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(VYouKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(VYouKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(VYouKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<VYouKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface VYouKtor_client_coreHttpReceivePipeline : VYouKtor_utilsPipeline<VYouKtor_client_coreHttpResponse *, VYouKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(VYouKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<VYouKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(VYouKotlinArray<VYouKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface VYouKtor_client_coreHttpRequestPipeline : VYouKtor_utilsPipeline<id, VYouKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(VYouKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<VYouKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(VYouKotlinArray<VYouKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface VYouKtor_client_coreHttpResponsePipeline : VYouKtor_utilsPipeline<VYouKtor_client_coreHttpResponseContainer *, VYouKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(VYouKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<VYouKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(VYouKotlinArray<VYouKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface VYouKtor_client_coreHttpSendPipeline : VYouKtor_utilsPipeline<id, VYouKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(VYouKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<VYouKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(VYouKotlinArray<VYouKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol VYouKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<VYouKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol VYouKtor_httpHeaders <VYouKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface VYouKtor_client_coreHttpClientCall : VYouBase <VYouKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(VYouKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<VYouKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) VYouKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<VYouKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<VYouKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) VYouKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol VYouKtor_ioByteReadChannel
@required
- (BOOL)cancelCause:(VYouKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(VYouLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(VYouKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(VYouLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(VYouKtor_ioChunkBuffer *)dst completionHandler:(void (^)(VYouInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(VYouKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(VYouInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(VYouInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(VYouInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(VYouBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(VYouByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(VYouDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(VYouFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(VYouKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(VYouKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(VYouInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(VYouLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(VYouKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(VYouKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<VYouKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(VYouShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<VYouKotlinSuspendFunction1>)consumer completionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<VYouKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(VYouBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) VYouKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface VYouKtor_utilsGMTDate : VYouBase <VYouKotlinComparable>
@property (class, readonly, getter=companion) VYouKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(VYouKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (VYouKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (VYouKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (VYouKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(VYouKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(VYouKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) VYouKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) VYouKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface VYouKtor_httpHttpStatusCode : VYouBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (VYouKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface VYouKtor_httpHttpProtocolVersion : VYouBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (VYouKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface VYouKotlinx_serialization_coreSerializersModule : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<VYouKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<VYouKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<VYouKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<VYouKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<VYouKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VYouKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<VYouKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<VYouKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface VYouKotlinx_serialization_jsonJsonConfiguration : VYouBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface VYouKotlinx_serialization_jsonJsonDefault : VYouKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(VYouKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(VYouKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface VYouKotlinx_serialization_jsonJsonElement : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VYouKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface VYouKoin_coreInstanceFactory<T> : VYouBase
- (instancetype)initWithBeanDefinition:(VYouKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(VYouKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(VYouKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(VYouKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(VYouKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) VYouKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface VYouKotlinPair<__covariant A, __covariant B> : VYouBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (VYouKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface VYouKoin_coreScopeDSL : VYouBase
- (instancetype)initWithScopeQualifier:(id<VYouKoin_coreQualifier>)scopeQualifier module:(VYouKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (VYouKotlinPair<VYouKoin_coreModule *, VYouKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (VYouKotlinPair<VYouKoin_coreModule *, VYouKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (VYouKotlinPair<VYouKoin_coreModule *, VYouKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) VYouKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<VYouKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface VYouKoin_coreSingleInstanceFactory<T> : VYouKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(VYouKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(VYouKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(VYouKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(VYouKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(VYouKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol VYouKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(VYouKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface VYouKoin_coreParametersHolderCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface VYouKoin_coreLevel : VYouKotlinEnum<VYouKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) VYouKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) VYouKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) VYouKoin_coreLevel *none __attribute__((swift_name("none")));
+ (VYouKotlinArray<VYouKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface VYouKoin_coreScopeRegistryCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol VYouKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<VYouKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<VYouKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol VYouKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface VYouKotlinx_serialization_coreSerialKind : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol VYouKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<VYouKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<VYouKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<VYouKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) VYouKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface VYouKotlinNothing : VYouBase
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol VYouKotlinCoroutineContextElement <VYouKotlinCoroutineContext>
@required
@property (readonly) id<VYouKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol VYouKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface VYouKtor_client_coreHttpRequestData : VYouBase
- (instancetype)initWithUrl:(VYouKtor_httpUrl *)url method:(VYouKtor_httpHttpMethod *)method headers:(id<VYouKtor_httpHeaders>)headers body:(VYouKtor_httpOutgoingContent *)body executionContext:(id<VYouKotlinx_coroutines_coreJob>)executionContext attributes:(id<VYouKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<VYouKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) VYouKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<VYouKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<VYouKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) VYouKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) VYouKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface VYouKtor_client_coreHttpResponseData : VYouBase
- (instancetype)initWithStatusCode:(VYouKtor_httpHttpStatusCode *)statusCode requestTime:(VYouKtor_utilsGMTDate *)requestTime headers:(id<VYouKtor_httpHeaders>)headers version:(VYouKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<VYouKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<VYouKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<VYouKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) VYouKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) VYouKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) VYouKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface VYouKotlinAbstractCoroutineContextElement : VYouBase <VYouKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<VYouKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<VYouKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol VYouKotlinContinuationInterceptor <VYouKotlinCoroutineContextElement>
@required
- (id<VYouKotlinContinuation>)interceptContinuationContinuation:(id<VYouKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<VYouKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface VYouKotlinx_coroutines_coreCoroutineDispatcher : VYouKotlinAbstractCoroutineContextElement <VYouKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<VYouKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<VYouKotlinCoroutineContext>)context block:(id<VYouKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<VYouKotlinCoroutineContext>)context block:(id<VYouKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<VYouKotlinContinuation>)interceptContinuationContinuation:(id<VYouKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<VYouKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (VYouKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (VYouKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(VYouKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<VYouKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface VYouKtor_client_coreProxyConfig : VYouBase
- (instancetype)initWithUrl:(VYouKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol VYouKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(VYouKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) VYouKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface VYouKtor_utilsAttributeKey<T> : VYouBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface VYouKtor_eventsEventDefinition<T> : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol VYouKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface VYouKtor_utilsPipelinePhase : VYouBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol VYouKotlinSuspendFunction2 <VYouKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface VYouKtor_client_coreHttpReceivePipelinePhases : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) VYouKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) VYouKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface VYouKtor_client_coreHttpRequestPipelinePhases : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) VYouKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) VYouKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) VYouKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) VYouKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol VYouKtor_httpHttpMessageBuilder
@required
@property (readonly) VYouKtor_httpHeadersBuilder *headers_ __attribute__((swift_name("headers_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface VYouKtor_client_coreHttpRequestBuilder : VYouBase <VYouKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) VYouKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (VYouKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<VYouKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<VYouKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<VYouKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (VYouKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(VYouKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (VYouKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(VYouKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(VYouKtor_httpURLBuilder *, VYouKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property VYouKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<VYouKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) VYouKtor_httpHeadersBuilder *headers_ __attribute__((swift_name("headers_")));
@property VYouKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) VYouKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface VYouKtor_client_coreHttpResponsePipelinePhases : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) VYouKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) VYouKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) VYouKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) VYouKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface VYouKtor_client_coreHttpResponseContainer : VYouBase
- (instancetype)initWithExpectedType:(VYouKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (VYouKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (VYouKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(VYouKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface VYouKtor_client_coreHttpSendPipelinePhases : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) VYouKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) VYouKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) VYouKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) VYouKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol VYouKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface VYouKtor_client_coreHttpClientCallCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface VYouKtor_utilsTypeInfo : VYouBase
- (instancetype)initWithType:(id<VYouKotlinKClass>)type reifiedType:(id<VYouKotlinKType>)reifiedType kotlinType:(id<VYouKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<VYouKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<VYouKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<VYouKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (VYouKtor_utilsTypeInfo *)doCopyType:(id<VYouKotlinKClass>)type reifiedType:(id<VYouKotlinKType>)reifiedType kotlinType:(id<VYouKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VYouKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<VYouKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<VYouKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol VYouKtor_client_coreHttpRequest <VYouKtor_httpHttpMessage, VYouKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<VYouKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) VYouKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) VYouKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) VYouKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) VYouKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface VYouKtor_ioMemory : VYouBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(VYouKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(VYouKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (VYouKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (VYouKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface VYouKtor_ioBuffer : VYouBase
- (instancetype)initWithMemory:(VYouKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (VYouKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(VYouKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((unavailable("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) VYouKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface VYouKtor_ioChunkBuffer : VYouKtor_ioBuffer
- (instancetype)initWithMemory:(VYouKtor_ioMemory *)memory origin:(VYouKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<VYouKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(VYouKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (VYouKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (VYouKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<VYouKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) VYouKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) VYouKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface VYouKotlinByteArray : VYouBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(VYouByte *(^)(VYouInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (VYouKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface VYouKtor_ioInput : VYouBase <VYouKtor_ioCloseable>
- (instancetype)initWithHead:(VYouKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<VYouKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (VYouKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(VYouKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(VYouKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(VYouKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<VYouKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<VYouKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<VYouKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface VYouKtor_ioByteReadPacket : VYouKtor_ioInput
- (instancetype)initWithHead:(VYouKtor_ioChunkBuffer *)head pool:(id<VYouKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(VYouKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<VYouKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (VYouKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (VYouKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(VYouKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol VYouKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (VYouKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol VYouKotlinSuspendFunction1 <VYouKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol VYouKotlinAppendable
@required
- (id<VYouKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<VYouKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<VYouKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface VYouKtor_utilsGMTDateCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface VYouKtor_utilsWeekDay : VYouKotlinEnum<VYouKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VYouKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) VYouKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) VYouKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) VYouKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) VYouKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) VYouKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) VYouKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (VYouKotlinArray<VYouKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface VYouKtor_utilsMonth : VYouKotlinEnum<VYouKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VYouKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) VYouKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) VYouKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) VYouKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) VYouKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) VYouKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) VYouKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) VYouKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) VYouKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) VYouKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) VYouKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) VYouKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (VYouKotlinArray<VYouKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface VYouKtor_httpHttpStatusCodeCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) VYouKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) VYouKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) VYouKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) VYouKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) VYouKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) VYouKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) VYouKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) VYouKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) VYouKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) VYouKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) VYouKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) VYouKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) VYouKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) VYouKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) VYouKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) VYouKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) VYouKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) VYouKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) VYouKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) VYouKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) VYouKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) VYouKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) VYouKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) VYouKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) VYouKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) VYouKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) VYouKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) VYouKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) VYouKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) VYouKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) VYouKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) VYouKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) VYouKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) VYouKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) VYouKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) VYouKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) VYouKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) VYouKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) VYouKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) VYouKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) VYouKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) VYouKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) VYouKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) VYouKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) VYouKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) VYouKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) VYouKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) VYouKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) VYouKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) VYouKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) VYouKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) VYouKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<VYouKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface VYouKtor_httpHttpProtocolVersionCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (VYouKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) VYouKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol VYouKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<VYouKotlinKClass>)kClass provider:(id<VYouKotlinx_serialization_coreKSerializer> (^)(NSArray<id<VYouKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<VYouKotlinKClass>)kClass serializer:(id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<VYouKotlinKClass>)baseClass actualClass:(id<VYouKotlinKClass>)actualClass actualSerializer:(id<VYouKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<VYouKotlinKClass>)baseClass defaultSerializerProvider:(id<VYouKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface VYouKotlinx_serialization_jsonJsonElementCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<VYouKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface VYouKoin_coreBeanDefinition<T> : VYouBase
- (instancetype)initWithScopeQualifier:(id<VYouKoin_coreQualifier>)scopeQualifier primaryType:(id<VYouKotlinKClass>)primaryType qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition kind:(VYouKoin_coreKind *)kind secondaryTypes:(NSArray<id<VYouKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<VYouKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<VYouKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<VYouKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (VYouKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<VYouKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (VYouKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<VYouKoin_coreQualifier>)scopeQualifier primaryType:(id<VYouKotlinKClass>)primaryType qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *))definition kind:(VYouKoin_coreKind *)kind secondaryTypes:(NSArray<id<VYouKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<VYouKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<VYouKotlinKClass>)clazz qualifier:(id<VYouKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<VYouKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property VYouKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(VYouKoin_coreScope *, VYouKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) VYouKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<VYouKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) id<VYouKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<VYouKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<VYouKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface VYouKoin_coreInstanceFactoryCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface VYouKoin_coreInstanceContext : VYouBase
- (instancetype)initWithKoin:(VYouKoin_coreKoin *)koin scope:(VYouKoin_coreScope *)scope parameters:(VYouKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) VYouKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) VYouKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) VYouKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface VYouKtor_httpUrl : VYouBase
@property (class, readonly, getter=companion) VYouKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<VYouKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) VYouKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface VYouKtor_httpHttpMethod : VYouBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (VYouKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface VYouKtor_httpOutgoingContent : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(VYouKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(VYouKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<VYouKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) VYouLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) VYouKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<VYouKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) VYouKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol VYouKotlinx_coroutines_coreJob <VYouKotlinCoroutineContextElement>
@required
- (id<VYouKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<VYouKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(VYouKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (VYouKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<VYouKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(VYouKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<VYouKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(VYouKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(VYouKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<VYouKotlinx_coroutines_coreJob>)plusOther_:(id<VYouKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<VYouKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<VYouKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol VYouKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<VYouKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface VYouKotlinAbstractCoroutineContextKey<B, E> : VYouBase <VYouKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<VYouKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<VYouKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface VYouKotlinx_coroutines_coreCoroutineDispatcherKey : VYouKotlinAbstractCoroutineContextKey<id<VYouKotlinContinuationInterceptor>, VYouKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<VYouKotlinCoroutineContextKey>)baseKey safeCast:(id<VYouKotlinCoroutineContextElement> _Nullable (^)(id<VYouKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol VYouKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol VYouKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<VYouKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<VYouKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<VYouKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<VYouKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface VYouKtor_utilsStringValuesBuilderImpl : VYouBase <VYouKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<VYouKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<VYouKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<VYouKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<VYouKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) VYouMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface VYouKtor_httpHeadersBuilder : VYouKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<VYouKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface VYouKtor_client_coreHttpRequestBuilderCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface VYouKtor_httpURLBuilder : VYouBase
- (instancetype)initWithProtocol:(VYouKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<VYouKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (VYouKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<VYouKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<VYouKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property VYouKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol VYouKotlinKType
@required
@property (readonly) NSArray<VYouKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<VYouKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface VYouKtor_ioMemoryCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface VYouKtor_ioBufferCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol VYouKtor_ioObjectPool <VYouKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface VYouKtor_ioChunkBufferCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<VYouKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<VYouKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface VYouKotlinByteIterator : VYouBase <VYouKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (VYouByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface VYouKtor_ioInputCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface VYouKtor_ioByteReadPacketCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) VYouKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface VYouKtor_utilsWeekDayCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (VYouKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface VYouKtor_utilsMonthCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (VYouKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface VYouKoin_coreKind : VYouKotlinEnum<VYouKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) VYouKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) VYouKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (VYouKotlinArray<VYouKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface VYouKoin_coreCallbacks<T> : VYouBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (VYouKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface VYouKtor_httpUrlCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol VYouKtor_httpParameters <VYouKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface VYouKtor_httpURLProtocol : VYouBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (VYouKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface VYouKtor_httpHttpMethodCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<VYouKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) VYouKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) VYouKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) VYouKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) VYouKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) VYouKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) VYouKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) VYouKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface VYouKtor_httpHeaderValueWithParameters : VYouBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<VYouKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<VYouKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface VYouKtor_httpContentType : VYouKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<VYouKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<VYouKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VYouKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(VYouKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (VYouKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (VYouKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol VYouKotlinx_coroutines_coreChildHandle <VYouKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(VYouKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<VYouKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol VYouKotlinx_coroutines_coreChildJob <VYouKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<VYouKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol VYouKotlinSequence
@required
- (id<VYouKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol VYouKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<VYouKotlinx_coroutines_coreSelectInstance>)select block:(id<VYouKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface VYouKtor_httpURLBuilderCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol VYouKtor_httpParametersBuilder <VYouKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface VYouKotlinKTypeProjection : VYouBase
- (instancetype)initWithVariance:(VYouKotlinKVariance * _Nullable)variance type:(id<VYouKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VYouKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (VYouKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<VYouKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (VYouKotlinKTypeProjection *)doCopyVariance:(VYouKotlinKVariance * _Nullable)variance type:(id<VYouKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<VYouKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) VYouKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface VYouKtor_httpURLProtocolCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) VYouKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) VYouKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) VYouKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) VYouKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) VYouKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, VYouKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface VYouKtor_httpHeaderValueParam : VYouBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (VYouKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface VYouKtor_httpHeaderValueWithParametersCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<VYouKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface VYouKtor_httpContentTypeCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (VYouKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) VYouKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol VYouKotlinx_coroutines_coreParentJob <VYouKotlinx_coroutines_coreJob>
@required
- (VYouKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol VYouKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<VYouKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(VYouKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(VYouKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<VYouKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface VYouKotlinKVariance : VYouKotlinEnum<VYouKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VYouKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) VYouKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) VYouKotlinKVariance *out __attribute__((swift_name("out")));
+ (VYouKotlinArray<VYouKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface VYouKotlinKTypeProjectionCompanion : VYouBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VYouKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (VYouKotlinKTypeProjection *)contravariantType:(id<VYouKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (VYouKotlinKTypeProjection *)covariantType:(id<VYouKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (VYouKotlinKTypeProjection *)invariantType:(id<VYouKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) VYouKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface VYouKotlinx_coroutines_coreAtomicDesc : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(VYouKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(VYouKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property VYouKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface VYouKotlinx_coroutines_coreOpDescriptor : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(VYouKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : VYouKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) VYouKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface VYouKotlinx_coroutines_coreAtomicOp<__contravariant T> : VYouKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) VYouKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface VYouKotlinx_coroutines_coreLockFreeLinkedListNode : VYouBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(VYouBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(VYouBoolean *(^)(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(VYouBoolean *(^)(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(VYouBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<VYouKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<VYouKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(VYouBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : VYouKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(VYouKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(VYouKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(VYouKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(VYouKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface VYouKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : VYouKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(VYouKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(VYouKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(VYouKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) VYouKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
