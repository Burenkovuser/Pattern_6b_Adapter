//
//  USANotebookEuropeanAdapter.h
//  Adapter2
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "Charger.h"
#import "EuropeanNotebookChargerDelegate.h"
#import "USANotebookCharger.h"
#import "EuropeanNotebookCharger.h"

@interface USANotebookEuropeanAdapter : Charger <EuropeanNotebookChargerDelegate>

@property (nonatomic, strong) USANotebookCharger *usaCharger;

-(id) initWithUSANotebookCharger:(USANotebookCharger *) charger;
-(void) charge;

@end
