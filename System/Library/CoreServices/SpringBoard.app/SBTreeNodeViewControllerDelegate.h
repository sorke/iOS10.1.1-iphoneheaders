/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBTreeNodeViewControllerDelegate <SBTreeNodeViewControllerTransitionObserver>
@optional
-(void)treeNodeViewController:(id)arg1 selectedChildTreeNode:(id)arg2;
-(void)treeNodeViewController:(id)arg1 dismissedChildTreeNode:(id)arg2;
-(id)treeNodeViewController:(id)arg1 targetExpandedTreeNodeForProposedTreeNode:(id)arg2;
-(id)treeNodeViewController:(id)arg1 destinationExpandedTreeNodeForTargetTreeNode:(id)arg2;
-(id)treeNodeViewController:(id)arg1 animationControllerForOperation:(long long)arg2 animated:(BOOL)arg3 fromViewController:(id)arg4 fromTreeNode:(id)arg5 toViewController:(id)arg6 toTreeNode:(id)arg7;
-(id)treeNodeViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;

@required
-(id)treeNodeViewController:(id)arg1 viewControllerForChildTreeNode:(id)arg2;

@end
