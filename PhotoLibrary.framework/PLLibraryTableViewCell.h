/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class UITextField;

@interface PLLibraryTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_editableText;
    BOOL _allowsRename;
    BOOL _cellEnabled;
    id <PLLibraryTableViewCellEditingDelegate> _editingDelegate;
}

+ (id)photoCountFormatter;
@property(nonatomic) id <PLLibraryTableViewCellEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(nonatomic) BOOL cellEnabled; // @synthesize cellEnabled=_cellEnabled;
@property BOOL allowsRename; // @synthesize allowsRename=_allowsRename;
- (void)layoutSubviews;
- (struct CGPoint)destinationPointForMovePhotosAnimation;
- (void)animatePopRowWithDuration:(double)arg1 completion:(id)arg2;
- (struct CGRect)_editableFieldFrame;
- (void)endRenaming;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)willTransitionToState:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isRenaming) BOOL renaming;
- (void)setText:(id)arg1 photoCount:(int)arg2 posterImage:(id)arg3;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

