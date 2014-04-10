/**********************************************************\
|                                                          |
|                          hprose                          |
|                                                          |
| Official WebSite: http://www.hprose.com/                 |
|                   http://www.hprose.net/                 |
|                   http://www.hprose.org/                 |
|                                                          |
\**********************************************************/
/**********************************************************\
 *                                                        *
 * HproseClientProxy.h                                    *
 *                                                        *
 * hprose client proxy header for Objective-C.            *
 *                                                        *
 * LastModified: Apr 10, 2014                             *
 * Author: Ma Bingyao <andot@hprose.com>                  *
 *                                                        *
\**********************************************************/

#import <Foundation/Foundation.h>

@class HproseClient;

@interface HproseClientProxy : NSProxy {
    @private
    Protocol *protocol;
    HproseClient *client;
    NSString *ns;
}

@property Protocol *protocol;
@property HproseClient *client;
@property (copy) NSString *ns;

- init:(Protocol *)aProtocol withClient:(HproseClient *)aClient withNameSpace:(NSString *)aNameSpace;

@end