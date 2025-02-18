void
stop
delete
end 






































































































@implementation GTLRFrameworkTest

- (void)testFrameworkVersion {
  NSUInteger major = NSUIntegerMax;
  NSUInteger minor = NSUIntegerMax;
  NSUInteger release = NSUIntegerMax;

  GTLRFrameworkVersion(&major, &minor, &release);

  XCTAssertTrue(major != NSUIntegerMax, @"version unset");
  XCTAssertTrue(minor != NSUIntegerMax, @"version unset");
  XCTAssertTrue(release != NSUIntegerMax, @"version unset");
}

@end
