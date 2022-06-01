import random

print("<< 가위바위보 땅따먹기 게임 >>")
print("- 가위, 바위, 보 중에서 하나를 입력하세요.")
print("- 가위바위보를 해서 이긴 쪽이 벌집을 한칸 색칠합니다.(플레이어=파란색, 컴퓨터=빨간색)")
print("- 7개의 칸중 더 많은 칸을 색칠한 쪽이 승리합니다.")
print("- 비길 경우 그 판은 아무도 색칠하지 않습니다.")
print("===========================================")

total_score = 0
player_score = 0
computer_score = 0
def 가위바위보():
    list = ["가위", "바위", "보"]
    a = random.randint(0,2)
    computer=list[a]
    player=input("가위, 바위, 보 중 하나를 선택하세요. :")

    if computer==player:
        print("비겼습니다")
    elif player=="가위":
        if computer=="바위":
            print("졌습니다.(가위 < 바위)")
        else:
            print("이겼습니다.(가위 > 보)")
    elif player=="바위":
        if computer=="보":
            print("졌습니다.(바위 < 보)")
        else:
            print("이겼습니다.(바위 > 가위)")
    elif player=="보":
        if computer=="가위":
            print("졌습니다.(보 < 가위)")
        else:
            print("이겼습니다.(보 > 바위)")
    else:
        print("잘못된 입력입니다.")

    print("당신의 점수:", player_score / "컴퓨터의 점수:", computer_score)

가위바위보(), 가위바위보(), 가위바위보(), 가위바위보(), 가위바위보(), 가위바위보(), 가위바위보()