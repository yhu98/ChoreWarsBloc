//
//  PFTeam.h
//  ChoreWars
//
//  Created by Douglas Hewitt on 10/23/15.
//  Copyright © 2015 madebydouglas. All rights reserved.
//

#import <Parse/Parse.h>

@interface PFTeam : PFObject<PFSubclassing>

// attributes
- (void) setName:(NSString *)sender;
- (NSString *) getName;

// relationships
- (void) choresToWin;
- (void) competitions;
- (void) opposingChoresToConfirm;
- (void) participants;
- (void) household;

@end
