//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterUserRankList : MMObject <PBCoding>
{
    _Bool hasRank;
    NSString *appID;
    NSArray *rankList;
    NSString *title;
    NSString *moreTitle;
    NSString *moreUrl;
    NSString *rankTitle;
    NSString *myDesc;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *myDesc; // @synthesize myDesc;
@property(retain, nonatomic) NSString *rankTitle; // @synthesize rankTitle;
@property(retain, nonatomic) NSString *moreUrl; // @synthesize moreUrl;
@property(retain, nonatomic) NSString *moreTitle; // @synthesize moreTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList;
@property(nonatomic) _Bool hasRank; // @synthesize hasRank;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

