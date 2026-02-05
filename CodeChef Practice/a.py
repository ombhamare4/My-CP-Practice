def validateForPromotion(empld, employees):
    for employee in employees:
        if employee['id'] == empld:
            learning_hours = employee['learning_hours']
            rating = employee['rating']
            if learning_hours >= 6 and rating >= 2:
                return "ELIGIBLE CANDIDATE"
            else:
                return "NOT AN ELIGIBLE CANDIDATE"
    return "INVALID INPUT"

employees = [
    {
        'id': '123',
        'learning_hours': 8,
        'rating': 3
    },
    {
        'id': '456',
        'learning_hours': 5,
        'rating': 2
    }
]

result = validateForPromotion('123', employees)
print(result)