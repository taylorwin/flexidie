/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "FBAuthenticationManager-Protocol.h"

@class FBAPISessionStore, FBFacebookCredentials, FBMessengerUser;

@interface FBMessengerModuleAuthenticationManager (version601
) //: NSObject <FBAuthenticationManager>
//{
//    FBMessengerUser *_mailboxViewer;
//    FBAPISessionStore *_sessionStore;
//    FBFacebookCredentials *_pageCredentials;
//    FBFacebookCredentials *_userCredentials;
//}

+ (id)authenticationManagerWithSessionStore:(id)arg1;
@property(retain, nonatomic) FBFacebookCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
@property(retain, nonatomic) FBFacebookCredentials *pageCredentials; // @synthesize pageCredentials=_pageCredentials;
@property(retain, nonatomic) FBAPISessionStore *sessionStore; // @synthesize sessionStore=_sessionStore;
- (id)keychainUser;
- (BOOL)hasKeychainUser;
- (void)saveKeychainCredentials:(id)arg1;
- (id)keychainCredentials;
- (BOOL)hasKeychainCredentials;
- (void)clearKeychainCredentials;
- (void)clear;
- (id)mailboxViewerCredentials;
- (void)setMailboxViewerPageCredentialsOverride:(id)arg1;
- (void)prepareMailboxViewer;
- (id)mailboxViewer;
- (BOOL)hasMailboxViewer;
- (void)saveFacebookCredentials:(id)arg1;
- (id)facebookCredentials;
- (BOOL)hasFacebookCredentials;
- (void)dealloc;

@end
