#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char *phrases[] = {
		"To begin, one must stop talking and start doing. — Walt Disney",
		"It is not because things are hard that we do not dare, but because we do not dare that they are hard. — Seneca",
		"The future belongs to those who trust in the beauty of their dreams. — Eleanor Roosevelt",
		"Do what you can, with what you have, right where you are. — Theodore Roosevelt",
		"Our greatest glory lies not in never falling, but in rising every time we fall. — Confucius",
		"It does not matter how slowly you go as long as you do not stop. — Confucius",
		"What does not destroy us makes us stronger. — Friedrich Nietzsche",
		"A journey of a thousand miles begins with a single step. — Lao Tzu",
		"Success is the sum of small efforts, repeated day in and day out. — Robert Collier",
		"If you are going through a difficult time, keep moving forward. — Winston Churchill",
		"The best time to plant a tree was twenty years ago; the second best time is now. — Chinese Proverb",
		"Do not judge each day by what you harvest, but by the seeds you plant. — Robert Louis Stevenson",
	};

	int total_phrases = 12;
	char answer;

	printf("Do you want to generate a motivational phrase to kickstart your day? (y/N): ");
	scanf(" %c", &answer);

if (answer == 'y') {
		srand(time(NULL));
		int random_index = rand() %total_phrases;
		printf("%s\n", phrases[random_index]);
	
	} else {
		printf("Goodbye!\n");
	}

	return 0;
}
