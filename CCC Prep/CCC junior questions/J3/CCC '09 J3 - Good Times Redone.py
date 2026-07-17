def converter(time, offset):
    hours = time // 100
    minutes = time % 100
    total = (hours*60 + minutes + offset) % 1440 # 24 hours * 60 minutes or 1440 minutes/day
    return (total//60)*100 + (total % 60)

OttawaTime = int(input())
print(f"{OttawaTime} in Ottawa")
print(f"{converter(OttawaTime, -180)} in Victoria")
print(f"{converter(OttawaTime, -120)} in Edmonton")
print(f"{converter(OttawaTime, -60)} in Winnipeg")
print(f"{OttawaTime} in Toronto")
print(f"{converter(OttawaTime, 60)} in Halifax")
print(f"{converter(OttawaTime, 90)} in St. John's")
