
#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    srand((unsigned)time(NULL));
    const int n=7;
    int arr[n];
    sortedArray(arr, n);
    
    XCTAssertNotEqual(n, 1);
    
    
}

@end
