//
//  UPCUnitViewController.h
//  UPC
//
//  Created by Jose Gonzalez Gomez on 01/06/12.
//  Copyright (c) 2012 Universitat Politècnica de Catalunya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UPCStructuredDataViewController.h"
#import "UPCUnit.h"


@interface UPCUnitViewController : UPCStructuredDataViewController

@property (strong, nonatomic) UPCUnit *unit;

- (IBAction)youtubeVideoButtonTapped:(id)sender;

@end
