// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class MCate;
@class MCateList;
@class MCateList_Builder;
@class MCate_Builder;
@class MFocus;
@class MFocusList;
@class MFocusList_Builder;
@class MFocus_Builder;

@interface BannerRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface MFocus : PBGeneratedMessage {
@private
  BOOL hasType_:1;
  BOOL hasId_:1;
  BOOL hasImg_:1;
  BOOL hasFid_:1;
  BOOL hasUrl_:1;
  int32_t type;
  NSString* id;
  NSString* img;
  NSString* fid;
  NSString* url;
}
- (BOOL) hasId;
- (BOOL) hasImg;
- (BOOL) hasType;
- (BOOL) hasFid;
- (BOOL) hasUrl;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* img;
@property (readonly) int32_t type;
@property (readonly, retain) NSString* fid;
@property (readonly, retain) NSString* url;

+ (MFocus*) defaultInstance;
- (MFocus*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MFocus_Builder*) builder;
+ (MFocus_Builder*) builder;
+ (MFocus_Builder*) builderWithPrototype:(MFocus*) prototype;

+ (MFocus*) parseFromData:(NSData*) data;
+ (MFocus*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MFocus*) parseFromInputStream:(NSInputStream*) input;
+ (MFocus*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MFocus*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MFocus*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MFocus_Builder : PBGeneratedMessage_Builder {
@private
  MFocus* protobufBuilderResult;
}

- (MFocus*) defaultInstance;

- (MFocus_Builder*) clear;
- (MFocus_Builder*) clone;

- (MFocus*) build;
- (MFocus*) buildPartial;

- (MFocus_Builder*) mergeFrom:(MFocus*) other;
- (MFocus_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MFocus_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MFocus_Builder*) setId:(NSString*) _value;
- (MFocus_Builder*) clearId;

- (BOOL) hasImg;
- (NSString*) img;
- (MFocus_Builder*) setImg:(NSString*) _value;
- (MFocus_Builder*) clearImg;

- (BOOL) hasType;
- (int32_t) type;
- (MFocus_Builder*) setType:(int32_t) _value;
- (MFocus_Builder*) clearType;

- (BOOL) hasFid;
- (NSString*) fid;
- (MFocus_Builder*) setFid:(NSString*) _value;
- (MFocus_Builder*) clearFid;

- (BOOL) hasUrl;
- (NSString*) url;
- (MFocus_Builder*) setUrl:(NSString*) _value;
- (MFocus_Builder*) clearUrl;
@end

@interface MFocusList : PBGeneratedMessage {
@private
  NSMutableArray* mutableListList;
}
- (NSArray*) listList;
- (MFocus*) listAtIndex:(int32_t) index;

+ (MFocusList*) defaultInstance;
- (MFocusList*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MFocusList_Builder*) builder;
+ (MFocusList_Builder*) builder;
+ (MFocusList_Builder*) builderWithPrototype:(MFocusList*) prototype;

+ (MFocusList*) parseFromData:(NSData*) data;
+ (MFocusList*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MFocusList*) parseFromInputStream:(NSInputStream*) input;
+ (MFocusList*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MFocusList*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MFocusList*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MFocusList_Builder : PBGeneratedMessage_Builder {
@private
  MFocusList* protobufBuilderResult;
}

- (MFocusList*) defaultInstance;

- (MFocusList_Builder*) clear;
- (MFocusList_Builder*) clone;

- (MFocusList*) build;
- (MFocusList*) buildPartial;

- (MFocusList_Builder*) mergeFrom:(MFocusList*) other;
- (MFocusList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MFocusList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) listList;
- (MFocus*) listAtIndex:(int32_t) index;
- (MFocusList_Builder*) replaceListAtIndex:(int32_t) index with:(MFocus*) _value;
- (MFocusList_Builder*) addList:(MFocus*) _value;
- (MFocusList_Builder*) addAllList:(NSArray*) values;
- (MFocusList_Builder*) clearListList;
@end

@interface MCate : PBGeneratedMessage {
@private
  BOOL hasIsHot_:1;
  BOOL hasCount_:1;
  BOOL hasId_:1;
  BOOL hasImg_:1;
  BOOL hasName_:1;
  int32_t isHot;
  int32_t count;
  NSString* id;
  NSString* img;
  NSString* name;
  NSMutableArray* mutableListList;
}
- (BOOL) hasId;
- (BOOL) hasImg;
- (BOOL) hasName;
- (BOOL) hasIsHot;
- (BOOL) hasCount;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* img;
@property (readonly, retain) NSString* name;
@property (readonly) int32_t isHot;
@property (readonly) int32_t count;
- (NSArray*) listList;
- (MCate*) listAtIndex:(int32_t) index;

+ (MCate*) defaultInstance;
- (MCate*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MCate_Builder*) builder;
+ (MCate_Builder*) builder;
+ (MCate_Builder*) builderWithPrototype:(MCate*) prototype;

+ (MCate*) parseFromData:(NSData*) data;
+ (MCate*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MCate*) parseFromInputStream:(NSInputStream*) input;
+ (MCate*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MCate*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MCate*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MCate_Builder : PBGeneratedMessage_Builder {
@private
  MCate* protobufBuilderResult;
}

- (MCate*) defaultInstance;

- (MCate_Builder*) clear;
- (MCate_Builder*) clone;

- (MCate*) build;
- (MCate*) buildPartial;

- (MCate_Builder*) mergeFrom:(MCate*) other;
- (MCate_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MCate_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MCate_Builder*) setId:(NSString*) _value;
- (MCate_Builder*) clearId;

- (BOOL) hasImg;
- (NSString*) img;
- (MCate_Builder*) setImg:(NSString*) _value;
- (MCate_Builder*) clearImg;

- (BOOL) hasName;
- (NSString*) name;
- (MCate_Builder*) setName:(NSString*) _value;
- (MCate_Builder*) clearName;

- (BOOL) hasIsHot;
- (int32_t) isHot;
- (MCate_Builder*) setIsHot:(int32_t) _value;
- (MCate_Builder*) clearIsHot;

- (BOOL) hasCount;
- (int32_t) count;
- (MCate_Builder*) setCount:(int32_t) _value;
- (MCate_Builder*) clearCount;

- (NSArray*) listList;
- (MCate*) listAtIndex:(int32_t) index;
- (MCate_Builder*) replaceListAtIndex:(int32_t) index with:(MCate*) _value;
- (MCate_Builder*) addList:(MCate*) _value;
- (MCate_Builder*) addAllList:(NSArray*) values;
- (MCate_Builder*) clearListList;
@end

@interface MCateList : PBGeneratedMessage {
@private
  NSMutableArray* mutableListList;
}
- (NSArray*) listList;
- (MCate*) listAtIndex:(int32_t) index;

+ (MCateList*) defaultInstance;
- (MCateList*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MCateList_Builder*) builder;
+ (MCateList_Builder*) builder;
+ (MCateList_Builder*) builderWithPrototype:(MCateList*) prototype;

+ (MCateList*) parseFromData:(NSData*) data;
+ (MCateList*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MCateList*) parseFromInputStream:(NSInputStream*) input;
+ (MCateList*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MCateList*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MCateList*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MCateList_Builder : PBGeneratedMessage_Builder {
@private
  MCateList* protobufBuilderResult;
}

- (MCateList*) defaultInstance;

- (MCateList_Builder*) clear;
- (MCateList_Builder*) clone;

- (MCateList*) build;
- (MCateList*) buildPartial;

- (MCateList_Builder*) mergeFrom:(MCateList*) other;
- (MCateList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MCateList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) listList;
- (MCate*) listAtIndex:(int32_t) index;
- (MCateList_Builder*) replaceListAtIndex:(int32_t) index with:(MCate*) _value;
- (MCateList_Builder*) addList:(MCate*) _value;
- (MCateList_Builder*) addAllList:(NSArray*) values;
- (MCateList_Builder*) clearListList;
@end

