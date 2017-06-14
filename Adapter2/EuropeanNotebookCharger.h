//
//  EuropeanNotebookCharger.h
//  Adapter2
//
//  Created by Vasilii on 14.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "Charger.h"
#import "EuropeanNotebookChargerDelegate.h"

@interface EuropeanNotebookCharger : Charger <EuropeanNotebookChargerDelegate>
{
    @private id<EuropeanNotebookChargerDelegate> _delegate;
}

@property (nonatomic, strong) id<EuropeanNotebookChargerDelegate> delegate;

@end
