ScoreList = []
for _ in range(5):
    ScoreList.append(int(input()))
difficultyFactor = int(input())


ScoreList.remove(min(ScoreList))
ScoreList.remove(max(ScoreList))

finalScore = 0
for score in ScoreList:
    finalScore += score
finalScore = finalScore*difficultyFactor
print(finalScore)

