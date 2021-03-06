// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class MAccount;
@class MAccount_Builder;
@class MMe;
@class MMe_Builder;

@interface AccountRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface MAccount : PBGeneratedMessage {
@private
  BOOL hasType_:1;
  BOOL hasInited_:1;
  BOOL hasId_:1;
  BOOL hasVerify_:1;
  int32_t type;
  int32_t inited;
  NSString* id;
  NSString* verify;
}
- (BOOL) hasId;
- (BOOL) hasVerify;
- (BOOL) hasType;
- (BOOL) hasInited;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* verify;
@property (readonly) int32_t type;
@property (readonly) int32_t inited;

+ (MAccount*) defaultInstance;
- (MAccount*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MAccount_Builder*) builder;
+ (MAccount_Builder*) builder;
+ (MAccount_Builder*) builderWithPrototype:(MAccount*) prototype;

+ (MAccount*) parseFromData:(NSData*) data;
+ (MAccount*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MAccount*) parseFromInputStream:(NSInputStream*) input;
+ (MAccount*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MAccount*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MAccount*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MAccount_Builder : PBGeneratedMessage_Builder {
@private
  MAccount* protobufBuilderResult;
}

- (MAccount*) defaultInstance;

- (MAccount_Builder*) clear;
- (MAccount_Builder*) clone;

- (MAccount*) build;
- (MAccount*) buildPartial;

- (MAccount_Builder*) mergeFrom:(MAccount*) other;
- (MAccount_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MAccount_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MAccount_Builder*) setId:(NSString*) _value;
- (MAccount_Builder*) clearId;

- (BOOL) hasVerify;
- (NSString*) verify;
- (MAccount_Builder*) setVerify:(NSString*) _value;
- (MAccount_Builder*) clearVerify;

- (BOOL) hasType;
- (int32_t) type;
- (MAccount_Builder*) setType:(int32_t) _value;
- (MAccount_Builder*) clearType;

- (BOOL) hasInited;
- (int32_t) inited;
- (MAccount_Builder*) setInited:(int32_t) _value;
- (MAccount_Builder*) clearInited;
@end

@interface MMe : PBGeneratedMessage {
@private
  BOOL hasSex_:1;
  BOOL hasCredits_:1;
  BOOL hasIsVerify_:1;
  BOOL hasId_:1;
  BOOL hasAccount_:1;
  BOOL hasNickname_:1;
  BOOL hasStb_:1;
  BOOL hasLocation_:1;
  int32_t sex;
  int32_t credits;
  int32_t isVerify;
  NSString* id;
  NSString* account;
  NSString* nickname;
  NSString* stb;
  NSString* location;
}
- (BOOL) hasId;
- (BOOL) hasAccount;
- (BOOL) hasSex;
- (BOOL) hasNickname;
- (BOOL) hasCredits;
- (BOOL) hasStb;
- (BOOL) hasIsVerify;
- (BOOL) hasLocation;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* account;
@property (readonly) int32_t sex;
@property (readonly, retain) NSString* nickname;
@property (readonly) int32_t credits;
@property (readonly, retain) NSString* stb;
@property (readonly) int32_t isVerify;
@property (readonly, retain) NSString* location;

+ (MMe*) defaultInstance;
- (MMe*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MMe_Builder*) builder;
+ (MMe_Builder*) builder;
+ (MMe_Builder*) builderWithPrototype:(MMe*) prototype;

+ (MMe*) parseFromData:(NSData*) data;
+ (MMe*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MMe*) parseFromInputStream:(NSInputStream*) input;
+ (MMe*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MMe*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MMe*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MMe_Builder : PBGeneratedMessage_Builder {
@private
  MMe* protobufBuilderResult;
}

- (MMe*) defaultInstance;

- (MMe_Builder*) clear;
- (MMe_Builder*) clone;

- (MMe*) build;
- (MMe*) buildPartial;

- (MMe_Builder*) mergeFrom:(MMe*) other;
- (MMe_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MMe_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MMe_Builder*) setId:(NSString*) _value;
- (MMe_Builder*) clearId;

- (BOOL) hasAccount;
- (NSString*) account;
- (MMe_Builder*) setAccount:(NSString*) _value;
- (MMe_Builder*) clearAccount;

- (BOOL) hasSex;
- (int32_t) sex;
- (MMe_Builder*) setSex:(int32_t) _value;
- (MMe_Builder*) clearSex;

- (BOOL) hasNickname;
- (NSString*) nickname;
- (MMe_Builder*) setNickname:(NSString*) _value;
- (MMe_Builder*) clearNickname;

- (BOOL) hasCredits;
- (int32_t) credits;
- (MMe_Builder*) setCredits:(int32_t) _value;
- (MMe_Builder*) clearCredits;

- (BOOL) hasStb;
- (NSString*) stb;
- (MMe_Builder*) setStb:(NSString*) _value;
- (MMe_Builder*) clearStb;

- (BOOL) hasIsVerify;
- (int32_t) isVerify;
- (MMe_Builder*) setIsVerify:(int32_t) _value;
- (MMe_Builder*) clearIsVerify;

- (BOOL) hasLocation;
- (NSString*) location;
- (MMe_Builder*) setLocation:(NSString*) _value;
- (MMe_Builder*) clearLocation;
@end

