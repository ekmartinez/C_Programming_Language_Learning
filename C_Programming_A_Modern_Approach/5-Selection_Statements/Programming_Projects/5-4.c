/*
Here’s a simplified version of the Beaufort scale, which is used to estimate wind force:

Speed (knots)	Description
Less than 1		Calm
1–3				Light air
4–27			Breeze
28–47			Gale
48–63			Storm
Above 63		Hurricane

Write a program that asks the user to enter a wind speed (in knots), 
then displays the corresponding description
*/

#include <stdio.h>

int main(void)
{

	int windSpeed;

	printf("\n%s", "Enter a wind speed (in knots): ");
	scanf("%d", &windSpeed);

	if (windSpeed < 1)
		printf("%s\n\n", "Calm");
	else if (windSpeed >= 1 && windSpeed <= 3)
		printf("%s\n\n", "Light air");
	else if (windSpeed >= 4 && windSpeed <= 27)
		printf("%s\n\n", "Breeze");
	else if (windSpeed >= 28 && windSpeed <= 47)
		printf("%s\n\n", "Gale");
	else if (windSpeed >= 48 && windSpeed <= 63)
		printf("%s\n\n", "Storm");
	else if (windSpeed > 63)
		printf("%s\n\n", "Hurricane");
}
/*

### Test Cases

1. **Test Case 1**
   - **Input:** 0
   - **Expected Output:** "Calm"
   - **Actual Output:** "Calm"

2. **Test Case 2**
   - **Input:** 1
   - **Expected Output:** "Light air"
   - **Actual Output:** "Light air"

3. **Test Case 3**
   - **Input:** 3
   - **Expected Output:** "Light air"
   - **Actual Output:** "Light air"

4. **Test Case 4**
   - **Input:** 4
   - **Expected Output:** "Breeze"
   - **Actual Output:** "Breeze"

5. **Test Case 5**
   - **Input:** 15
   - **Expected Output:** "Breeze"
   - **Actual Output:** "Breeze"

6. **Test Case 6**
   - **Input:** 28
   - **Expected Output:** "Gale"
   - **Actual Output:** "Gale"

7. **Test Case 7**
   - **Input:** 47
   - **Expected Output:** "Gale"
   - **Actual Output:** "Gale"

8. **Test Case 8**
   - **Input:** 48
   - **Expected Output:** "Storm"
   - **Actual Output:** "Storm"

9. **Test Case 9**
   - **Input:** 63
   - **Expected Output:** "Storm"
   - **Actual Output:** "Storm"

10. **Test Case 10**
    - **Input:** 64
    - **Expected Output:** "Hurricane"
    - **Actual Output:** "Hurricane"

11. **Test Case 11**
    - **Input:** 100
    - **Expected Output:** "Hurricane"
    - **Actual Output:** "Hurricane"

	*/

