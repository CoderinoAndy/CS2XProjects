# trout = int(input())
# pike = int(input())
# pickerel = int(input())
# TotalPoints = int(input())

# answerlist = []

# # Idea is to check the number of brown trout possible
# # Then, work backward by incrementing brown trout down to find the number of northern pike possible (leaving yellow pickerel at 0)
# # Finally, use all combinations of above to find the amount of yellow pickerel possible
# # Honestly sounds pretty hard but we can give it a go

# PossibleTrout = TotalPoints//trout
# # i.e. if total points is 4, and trout = 3, only one trout is possible
# if PossibleTrout > 0:
#     for TroutUsed in range(1, PossibleTrout + 1):
#         RemainingPoints = TotalPoints - (TroutUsed*trout)
#         PikeUsed = RemainingPoints//pike
#         RemainingPoints = RemainingPoints - (PikeUsed*pike)
#         PickerelUsed = RemainingPoints//pickerel
#         answerlist.append((TroutUsed, PikeUsed, PickerelUsed))

# PossiblePike = TotalPoints//pike
# if PossiblePike > 0:
#     for PikeUsed in range(1, PossiblePike + 1):
#         RemainingPoints = TotalPoints - (PikeUsed*pike)
#         PickerelUsed = RemainingPoints//pickerel
#         RemainingPoints = RemainingPoints - (PickerelUsed*pickerel)
#         TroutUsed = RemainingPoints//trout
#         answerlist.append((TroutUsed, PikeUsed, PickerelUsed))

# PossiblePickerel = TotalPoints//pickerel
# if PossiblePickerel > 0:
#     for PickerelUsed in range(1, PossiblePickerel + 1):
#         RemainingPoints = TotalPoints - (PickerelUsed*pickerel)
#         TroutUsed = RemainingPoints//trout
#         RemainingPoints = RemainingPoints - (TroutUsed*trout)
#         PikeUsed = RemainingPoints//pike
#         answerlist.append((TroutUsed, PikeUsed, PickerelUsed))
    

# for (trout, pike, pickerel) in answerlist:
#     print(f"{trout} Brown Trout, {pike} Northern Pike, {pickerel} Yellow Pickerel")
# print(f"Number of ways to catch fish: {len(answerlist)}")

trout = int(input())
pike = int(input())
pickerel = int(input())
total = int(input())

answerlist = []

for x in range(total//trout + 1):
    for y in range(total//pike + 1):
        for z in range(total//pickerel + 1):
            if 0 < trout*x + pike*y + pickerel*z <= total:
                answerlist.append((x, y, z))

for trout, pike, pickerel in answerlist:
    print(f"{trout} Brown Trout, {pike} Northern Pike, {pickerel} Yellow Pickerel")
print(f"Number of ways to catch fish: {len(answerlist)}")




