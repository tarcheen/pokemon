Developer: Hamed Mirlohi


Write a program that fulfills all the following requirements.

Program Flow:

1. Two Pokemon will battle to the arena.
2. In an infinite loop
	a. One of the Pokemon is chosen at random to attack first. Then they alternate attacking until one loses.

	b. If the life reaches zero, the Pokemon loses the battle.
	c. The loser of the battle is removed from the arena.
	d. A random type of Pokemon is added to the arena for the next battle


Pokemon Features:

1. Create the Pokemon classes; Pikachu and Squirtle
2. It should be easy to extend to support other Pokemon types.
3. Pokemon attributes and behavior
	a. Life-points - A "life" value that will be initialized to a random value between 50 and 100 at time of creation
	b. Attack- When it attacks, the attack value is randomized between 25 and 40

	c. Defend - When attacked, the defending Pokemon will have a %33 chance to avoid damage. if not avoided the attack damage is taken from the pokemon life points.

4. Pikachu attributes and behavior
	a. it has a %25 chance of increasing attack damage by %50

5. Squirtle attributes and behavior
	a. Avoid chance of %50
	b. Life value range of 70-100


Arena Feature:

	1. Create an Arena class that holds the Pokemon
	2. The arena manages the battle between Pokemon
