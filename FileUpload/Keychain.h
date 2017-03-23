//
// Keychain.h
//
// Based on code by Michael Mayo at http://overhrd.com/?p=208
//
// Created by Frank Kim on 1/3/11.
//

#import <Foundation/Foundation.h>

@interface Keychain : NSObject {
}

+ (void)saveString:(NSString *)inputString forKey:(NSString	*)account;
+ (NSString *)getStringForKey:(NSString *)account;
+ (void)deleteStringForKey:(NSString *)account;
+ (NSArray*)getAllKeys;
+ (void)deleteAllKeys;
+ (void)deleteCredentialKeys;
+ (void)updateKeychainStoring;
@end