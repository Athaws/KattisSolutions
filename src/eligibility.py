for n in range(int(input())):
    name, studystart, age, courses = input().split(' ')
    status = 'ineligible'
    if int(studystart.split('/')[0]) >= 2010 or int(age.split('/')[0]) >= 1991:
        status = 'eligible'
    elif int(courses) <= 40:
        status = 'coach petitions'
    print(name, status)