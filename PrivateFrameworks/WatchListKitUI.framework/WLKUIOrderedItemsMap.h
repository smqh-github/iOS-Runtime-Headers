/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIOrderedItemsMap : NSObject {
    long long  _dataSourceType;
    <WLKUIOrderedItemsMapDelegate> * _delegate;
    NSDictionary * _mappingDictionary;
    NSOrderedSet * _orderedKeys;
}

@property (nonatomic) long long dataSourceType;
@property (nonatomic) <WLKUIOrderedItemsMapDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *mappingDictionary;
@property (nonatomic, copy) NSOrderedSet *orderedKeys;

- (void).cxx_destruct;
- (void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(bool)arg2;
- (id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2;
- (long long)dataSourceType;
- (id)delegate;
- (id)init;
- (id)mappingDictionary;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)orderedKeys;
- (void)processEntities:(id)arg1 forDataSourceType:(long long)arg2;
- (void)removeAll;
- (void)setDataSourceType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMappingDictionary:(id)arg1;
- (void)setOrderedKeys:(id)arg1;
- (void)updateEntities:(id)arg1;

@end
