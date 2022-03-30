import Foundation
import XCTest
@testable import VYou

class CryptManagerTests: XCTestCase {
    let sut = CryptManager()
    
    func testBCrypt() {
        let actual = sut.encryptPassword(email: "test@test.com", password: "test1234", salt: "SJZgbruvbTF5k0sNNB3lnQ")
        debugPrint(actual)
        let expected = "$2b$12$x1jJ7V5wGziMqbNOgnbNfu6k5ZqQiabyhGSMWKSFCnb7EQwPeeJ8a"
        XCTAssertEqual(expected, actual)
    }
}
