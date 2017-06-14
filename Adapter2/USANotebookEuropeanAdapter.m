//
//  USANotebookEuropeanAdapter.m
//  Adapter2
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "USANotebookEuropeanAdapter.h"

@implementation USANotebookEuropeanAdapter

- (id)initWithUSANotebookCharger:(USANotebookCharger *)charger
{
    self = [super init];
    self.usaCharger = charger;
    return self;
}

-(void) chargetNotebookRoundHoles:(Charger *) charger
{
    [self.usaCharger chargeNotebookRectHoles:charger];

}

-(void) charge
{
    EuropeanNotebookCharger *euroCharge = [[EuropeanNotebookCharger alloc] init];
    euroCharge.delegate = self;
    [euroCharge charge];
}

@end
