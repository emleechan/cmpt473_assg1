#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Awards.h"


class StubRankList : public awards::RankList {
    public: 
        MOCK_METHOD0( getNext, std::string());
    
};
class MockAwardCeremonyActions : public awards::AwardCeremonyActions {
 public:
    MOCK_METHOD0(playAnthem, void());
    MOCK_METHOD1(awardBronze, void(std::string));
    MOCK_METHOD1(awardSilver, void(std::string) );
    MOCK_METHOD1(awardGold, void(std::string));
    MOCK_METHOD0(turnOffTheLightsAndGoHome, void());
};
TEST(AwardsTests, performAwardCeremony) {

    StubRankList recipient;
    MockAwardCeremonyActions awards;

    std::string  awardWinner1 = "Bob";
    std::string  awardWinner2 = "Sally";
    std::string  awardWinner3 = "Tim";

    EXPECT_CALL(recipient, getNext())
        .Times(3)
        .WillOnce(testing::Return(awardWinner1))
        .WillOnce(testing::Return(awardWinner2))
        .WillOnce(testing::Return(awardWinner3));

    testing::InSequence dummy;
    EXPECT_CALL(awards, playAnthem());
    EXPECT_CALL(awards, awardBronze(awardWinner1));
    EXPECT_CALL(awards, awardSilver(awardWinner2));
    EXPECT_CALL(awards, awardGold(awardWinner3));
    EXPECT_CALL(awards, turnOffTheLightsAndGoHome());
        
    awards::performAwardCeremony(recipient, awards);
}
