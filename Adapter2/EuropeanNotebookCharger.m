//
//  EuropeanNotebookCharger.m
//  Adapter2
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "EuropeanNotebookCharger.h"

@implementation EuropeanNotebookCharger

@synthesize delegate = _delegate;

-(id) init
{
    self = [super self];
    self.delegate = self;
    return self;
}
-(void) charge
{
    [_delegate chargetNotebookRoundHoles:self];
    [super charge];
}
-(void) chargetNotebookRoundHoles:(Charger *)charger
{
    //and yeah you can do smth with charger.
    NSLog(@"Charging with 220 and round holes!");
}

@end
