// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class MOrder;
@class MOrderMini;
@class MOrderMiniList;
@class MOrderMiniList_Builder;
@class MOrderMini_Builder;
@class MOrder_Builder;
@class MPay;
@class MPay_Builder;

@interface OrderRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface MPay : PBGeneratedMessage {
@private
  BOOL hasPayType_:1;
  BOOL hasNum_:1;
  BOOL hasType_:1;
  BOOL hasId_:1;
  BOOL hasCode_:1;
  BOOL hasName_:1;
  BOOL hasPrice_:1;
  BOOL hasTotal_:1;
  BOOL hasStbTotal_:1;
  BOOL hasPayStoreTotal_:1;
  BOOL hasStb_:1;
  int32_t payType;
  int32_t num;
  int32_t type;
  NSString* id;
  NSString* code;
  NSString* name;
  NSString* price;
  NSString* total;
  NSString* stbTotal;
  NSString* payStoreTotal;
  NSString* stb;
}
- (BOOL) hasId;
- (BOOL) hasCode;
- (BOOL) hasPayType;
- (BOOL) hasName;
- (BOOL) hasPrice;
- (BOOL) hasNum;
- (BOOL) hasTotal;
- (BOOL) hasStbTotal;
- (BOOL) hasPayStoreTotal;
- (BOOL) hasStb;
- (BOOL) hasType;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* code;
@property (readonly) int32_t payType;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* price;
@property (readonly) int32_t num;
@property (readonly, retain) NSString* total;
@property (readonly, retain) NSString* stbTotal;
@property (readonly, retain) NSString* payStoreTotal;
@property (readonly, retain) NSString* stb;
@property (readonly) int32_t type;

+ (MPay*) defaultInstance;
- (MPay*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MPay_Builder*) builder;
+ (MPay_Builder*) builder;
+ (MPay_Builder*) builderWithPrototype:(MPay*) prototype;

+ (MPay*) parseFromData:(NSData*) data;
+ (MPay*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MPay*) parseFromInputStream:(NSInputStream*) input;
+ (MPay*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MPay*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MPay*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MPay_Builder : PBGeneratedMessage_Builder {
@private
  MPay* protobufBuilderResult;
}

- (MPay*) defaultInstance;

- (MPay_Builder*) clear;
- (MPay_Builder*) clone;

- (MPay*) build;
- (MPay*) buildPartial;

- (MPay_Builder*) mergeFrom:(MPay*) other;
- (MPay_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MPay_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MPay_Builder*) setId:(NSString*) _value;
- (MPay_Builder*) clearId;

- (BOOL) hasCode;
- (NSString*) code;
- (MPay_Builder*) setCode:(NSString*) _value;
- (MPay_Builder*) clearCode;

- (BOOL) hasPayType;
- (int32_t) payType;
- (MPay_Builder*) setPayType:(int32_t) _value;
- (MPay_Builder*) clearPayType;

- (BOOL) hasName;
- (NSString*) name;
- (MPay_Builder*) setName:(NSString*) _value;
- (MPay_Builder*) clearName;

- (BOOL) hasPrice;
- (NSString*) price;
- (MPay_Builder*) setPrice:(NSString*) _value;
- (MPay_Builder*) clearPrice;

- (BOOL) hasNum;
- (int32_t) num;
- (MPay_Builder*) setNum:(int32_t) _value;
- (MPay_Builder*) clearNum;

- (BOOL) hasTotal;
- (NSString*) total;
- (MPay_Builder*) setTotal:(NSString*) _value;
- (MPay_Builder*) clearTotal;

- (BOOL) hasStbTotal;
- (NSString*) stbTotal;
- (MPay_Builder*) setStbTotal:(NSString*) _value;
- (MPay_Builder*) clearStbTotal;

- (BOOL) hasPayStoreTotal;
- (NSString*) payStoreTotal;
- (MPay_Builder*) setPayStoreTotal:(NSString*) _value;
- (MPay_Builder*) clearPayStoreTotal;

- (BOOL) hasStb;
- (NSString*) stb;
- (MPay_Builder*) setStb:(NSString*) _value;
- (MPay_Builder*) clearStb;

- (BOOL) hasType;
- (int32_t) type;
- (MPay_Builder*) setType:(int32_t) _value;
- (MPay_Builder*) clearType;
@end

@interface MOrderMini : PBGeneratedMessage {
@private
  BOOL hasPayType_:1;
  BOOL hasNum_:1;
  BOOL hasState_:1;
  BOOL hasType_:1;
  BOOL hasId_:1;
  BOOL hasGoodsId_:1;
  BOOL hasName_:1;
  BOOL hasImg_:1;
  BOOL hasTotal_:1;
  int32_t payType;
  int32_t num;
  int32_t state;
  int32_t type;
  NSString* id;
  NSString* goodsId;
  NSString* name;
  NSString* img;
  NSString* total;
}
- (BOOL) hasId;
- (BOOL) hasPayType;
- (BOOL) hasGoodsId;
- (BOOL) hasName;
- (BOOL) hasImg;
- (BOOL) hasNum;
- (BOOL) hasTotal;
- (BOOL) hasState;
- (BOOL) hasType;
@property (readonly, retain) NSString* id;
@property (readonly) int32_t payType;
@property (readonly, retain) NSString* goodsId;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* img;
@property (readonly) int32_t num;
@property (readonly, retain) NSString* total;
@property (readonly) int32_t state;
@property (readonly) int32_t type;

+ (MOrderMini*) defaultInstance;
- (MOrderMini*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MOrderMini_Builder*) builder;
+ (MOrderMini_Builder*) builder;
+ (MOrderMini_Builder*) builderWithPrototype:(MOrderMini*) prototype;

+ (MOrderMini*) parseFromData:(NSData*) data;
+ (MOrderMini*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrderMini*) parseFromInputStream:(NSInputStream*) input;
+ (MOrderMini*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrderMini*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MOrderMini*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MOrderMini_Builder : PBGeneratedMessage_Builder {
@private
  MOrderMini* protobufBuilderResult;
}

- (MOrderMini*) defaultInstance;

- (MOrderMini_Builder*) clear;
- (MOrderMini_Builder*) clone;

- (MOrderMini*) build;
- (MOrderMini*) buildPartial;

- (MOrderMini_Builder*) mergeFrom:(MOrderMini*) other;
- (MOrderMini_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MOrderMini_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MOrderMini_Builder*) setId:(NSString*) _value;
- (MOrderMini_Builder*) clearId;

- (BOOL) hasPayType;
- (int32_t) payType;
- (MOrderMini_Builder*) setPayType:(int32_t) _value;
- (MOrderMini_Builder*) clearPayType;

- (BOOL) hasGoodsId;
- (NSString*) goodsId;
- (MOrderMini_Builder*) setGoodsId:(NSString*) _value;
- (MOrderMini_Builder*) clearGoodsId;

- (BOOL) hasName;
- (NSString*) name;
- (MOrderMini_Builder*) setName:(NSString*) _value;
- (MOrderMini_Builder*) clearName;

- (BOOL) hasImg;
- (NSString*) img;
- (MOrderMini_Builder*) setImg:(NSString*) _value;
- (MOrderMini_Builder*) clearImg;

- (BOOL) hasNum;
- (int32_t) num;
- (MOrderMini_Builder*) setNum:(int32_t) _value;
- (MOrderMini_Builder*) clearNum;

- (BOOL) hasTotal;
- (NSString*) total;
- (MOrderMini_Builder*) setTotal:(NSString*) _value;
- (MOrderMini_Builder*) clearTotal;

- (BOOL) hasState;
- (int32_t) state;
- (MOrderMini_Builder*) setState:(int32_t) _value;
- (MOrderMini_Builder*) clearState;

- (BOOL) hasType;
- (int32_t) type;
- (MOrderMini_Builder*) setType:(int32_t) _value;
- (MOrderMini_Builder*) clearType;
@end

@interface MOrderMiniList : PBGeneratedMessage {
@private
  NSMutableArray* mutableListList;
}
- (NSArray*) listList;
- (MOrderMini*) listAtIndex:(int32_t) index;

+ (MOrderMiniList*) defaultInstance;
- (MOrderMiniList*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MOrderMiniList_Builder*) builder;
+ (MOrderMiniList_Builder*) builder;
+ (MOrderMiniList_Builder*) builderWithPrototype:(MOrderMiniList*) prototype;

+ (MOrderMiniList*) parseFromData:(NSData*) data;
+ (MOrderMiniList*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrderMiniList*) parseFromInputStream:(NSInputStream*) input;
+ (MOrderMiniList*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrderMiniList*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MOrderMiniList*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MOrderMiniList_Builder : PBGeneratedMessage_Builder {
@private
  MOrderMiniList* protobufBuilderResult;
}

- (MOrderMiniList*) defaultInstance;

- (MOrderMiniList_Builder*) clear;
- (MOrderMiniList_Builder*) clone;

- (MOrderMiniList*) build;
- (MOrderMiniList*) buildPartial;

- (MOrderMiniList_Builder*) mergeFrom:(MOrderMiniList*) other;
- (MOrderMiniList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MOrderMiniList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) listList;
- (MOrderMini*) listAtIndex:(int32_t) index;
- (MOrderMiniList_Builder*) replaceListAtIndex:(int32_t) index with:(MOrderMini*) _value;
- (MOrderMiniList_Builder*) addList:(MOrderMini*) _value;
- (MOrderMiniList_Builder*) addAllList:(NSArray*) values;
- (MOrderMiniList_Builder*) clearListList;
@end

@interface MOrder : PBGeneratedMessage {
@private
  BOOL hasState_:1;
  BOOL hasPayType_:1;
  BOOL hasType_:1;
  BOOL hasNum_:1;
  BOOL hasId_:1;
  BOOL hasCode_:1;
  BOOL hasGoodsId_:1;
  BOOL hasName_:1;
  BOOL hasInfo_:1;
  BOOL hasPrice_:1;
  BOOL hasImg_:1;
  BOOL hasCommentId_:1;
  BOOL hasCommentStars_:1;
  BOOL hasDeadline_:1;
  BOOL hasCombo_:1;
  BOOL hasDetailUrl_:1;
  BOOL hasPayTime_:1;
  BOOL hasPayTotal_:1;
  BOOL hasStbTotal_:1;
  BOOL hasStoreTotal_:1;
  int32_t state;
  int32_t payType;
  int32_t type;
  int32_t num;
  NSString* id;
  NSString* code;
  NSString* goodsId;
  NSString* name;
  NSString* info;
  NSString* price;
  NSString* img;
  NSString* commentId;
  NSString* commentStars;
  NSString* deadline;
  NSString* combo;
  NSString* detailUrl;
  NSString* payTime;
  NSString* payTotal;
  NSString* stbTotal;
  NSString* storeTotal;
  NSMutableArray* mutableTicketsList;
}
- (BOOL) hasId;
- (BOOL) hasCode;
- (BOOL) hasState;
- (BOOL) hasPayType;
- (BOOL) hasType;
- (BOOL) hasGoodsId;
- (BOOL) hasName;
- (BOOL) hasInfo;
- (BOOL) hasPrice;
- (BOOL) hasImg;
- (BOOL) hasNum;
- (BOOL) hasCommentId;
- (BOOL) hasCommentStars;
- (BOOL) hasDeadline;
- (BOOL) hasCombo;
- (BOOL) hasDetailUrl;
- (BOOL) hasPayTime;
- (BOOL) hasPayTotal;
- (BOOL) hasStbTotal;
- (BOOL) hasStoreTotal;
@property (readonly, retain) NSString* id;
@property (readonly, retain) NSString* code;
@property (readonly) int32_t state;
@property (readonly) int32_t payType;
@property (readonly) int32_t type;
@property (readonly, retain) NSString* goodsId;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* info;
@property (readonly, retain) NSString* price;
@property (readonly, retain) NSString* img;
@property (readonly) int32_t num;
@property (readonly, retain) NSString* commentId;
@property (readonly, retain) NSString* commentStars;
@property (readonly, retain) NSString* deadline;
@property (readonly, retain) NSString* combo;
@property (readonly, retain) NSString* detailUrl;
@property (readonly, retain) NSString* payTime;
@property (readonly, retain) NSString* payTotal;
@property (readonly, retain) NSString* stbTotal;
@property (readonly, retain) NSString* storeTotal;
- (NSArray*) ticketsList;
- (NSString*) ticketsAtIndex:(int32_t) index;

+ (MOrder*) defaultInstance;
- (MOrder*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (MOrder_Builder*) builder;
+ (MOrder_Builder*) builder;
+ (MOrder_Builder*) builderWithPrototype:(MOrder*) prototype;

+ (MOrder*) parseFromData:(NSData*) data;
+ (MOrder*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrder*) parseFromInputStream:(NSInputStream*) input;
+ (MOrder*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (MOrder*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (MOrder*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface MOrder_Builder : PBGeneratedMessage_Builder {
@private
  MOrder* protobufBuilderResult;
}

- (MOrder*) defaultInstance;

- (MOrder_Builder*) clear;
- (MOrder_Builder*) clone;

- (MOrder*) build;
- (MOrder*) buildPartial;

- (MOrder_Builder*) mergeFrom:(MOrder*) other;
- (MOrder_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (MOrder_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSString*) id;
- (MOrder_Builder*) setId:(NSString*) _value;
- (MOrder_Builder*) clearId;

- (BOOL) hasCode;
- (NSString*) code;
- (MOrder_Builder*) setCode:(NSString*) _value;
- (MOrder_Builder*) clearCode;

- (BOOL) hasState;
- (int32_t) state;
- (MOrder_Builder*) setState:(int32_t) _value;
- (MOrder_Builder*) clearState;

- (BOOL) hasPayType;
- (int32_t) payType;
- (MOrder_Builder*) setPayType:(int32_t) _value;
- (MOrder_Builder*) clearPayType;

- (BOOL) hasType;
- (int32_t) type;
- (MOrder_Builder*) setType:(int32_t) _value;
- (MOrder_Builder*) clearType;

- (BOOL) hasGoodsId;
- (NSString*) goodsId;
- (MOrder_Builder*) setGoodsId:(NSString*) _value;
- (MOrder_Builder*) clearGoodsId;

- (BOOL) hasName;
- (NSString*) name;
- (MOrder_Builder*) setName:(NSString*) _value;
- (MOrder_Builder*) clearName;

- (BOOL) hasInfo;
- (NSString*) info;
- (MOrder_Builder*) setInfo:(NSString*) _value;
- (MOrder_Builder*) clearInfo;

- (BOOL) hasPrice;
- (NSString*) price;
- (MOrder_Builder*) setPrice:(NSString*) _value;
- (MOrder_Builder*) clearPrice;

- (BOOL) hasImg;
- (NSString*) img;
- (MOrder_Builder*) setImg:(NSString*) _value;
- (MOrder_Builder*) clearImg;

- (BOOL) hasNum;
- (int32_t) num;
- (MOrder_Builder*) setNum:(int32_t) _value;
- (MOrder_Builder*) clearNum;

- (BOOL) hasCommentId;
- (NSString*) commentId;
- (MOrder_Builder*) setCommentId:(NSString*) _value;
- (MOrder_Builder*) clearCommentId;

- (BOOL) hasCommentStars;
- (NSString*) commentStars;
- (MOrder_Builder*) setCommentStars:(NSString*) _value;
- (MOrder_Builder*) clearCommentStars;

- (BOOL) hasDeadline;
- (NSString*) deadline;
- (MOrder_Builder*) setDeadline:(NSString*) _value;
- (MOrder_Builder*) clearDeadline;

- (NSArray*) ticketsList;
- (NSString*) ticketsAtIndex:(int32_t) index;
- (MOrder_Builder*) replaceTicketsAtIndex:(int32_t) index with:(NSString*) _value;
- (MOrder_Builder*) addTickets:(NSString*) _value;
- (MOrder_Builder*) addAllTickets:(NSArray*) values;
- (MOrder_Builder*) clearTicketsList;

- (BOOL) hasCombo;
- (NSString*) combo;
- (MOrder_Builder*) setCombo:(NSString*) _value;
- (MOrder_Builder*) clearCombo;

- (BOOL) hasDetailUrl;
- (NSString*) detailUrl;
- (MOrder_Builder*) setDetailUrl:(NSString*) _value;
- (MOrder_Builder*) clearDetailUrl;

- (BOOL) hasPayTime;
- (NSString*) payTime;
- (MOrder_Builder*) setPayTime:(NSString*) _value;
- (MOrder_Builder*) clearPayTime;

- (BOOL) hasPayTotal;
- (NSString*) payTotal;
- (MOrder_Builder*) setPayTotal:(NSString*) _value;
- (MOrder_Builder*) clearPayTotal;

- (BOOL) hasStbTotal;
- (NSString*) stbTotal;
- (MOrder_Builder*) setStbTotal:(NSString*) _value;
- (MOrder_Builder*) clearStbTotal;

- (BOOL) hasStoreTotal;
- (NSString*) storeTotal;
- (MOrder_Builder*) setStoreTotal:(NSString*) _value;
- (MOrder_Builder*) clearStoreTotal;
@end

