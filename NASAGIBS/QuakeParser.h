//
//  QuakeParser.h
//  NASAGIBS
//
//  Created by MSaktiAlvissalim on 2014/10/11.
//  Copyright (c) 2014年 Alvis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QuakeParser : NSObject <NSXMLParserDelegate>

- (id) initWithXMLData:(NSData *) data;

@end
