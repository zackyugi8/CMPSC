//topic is sleep quality and its effects on health
//My Virtual Medical Assistant will evaluate the user’s sleep quality by asking questions about their sleeping habits. 
//It will look at things like how many hours they sleep, how often they wake up during the night, how tired they feel during the day, and whether they use caffeine or electronics before bed. 
//Based on their answers, the program will calculate a score and determine if their sleep quality is good, average, or poor.
// It will then give the user recommendations that may help them improve their sleep habits.

//https://www.thensf.org
//https://www.nhlbi.nih.gov/health-topics/education-and-awareness/sleep-health
//https://www.health.harvard.edu/topics/sleep


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // -------------------------------------------------------
    // Virtual Medical Assistant - Sleep Quality
    // Educational programming project
    // -------------------------------------------------------

    // Array containing the 10 sleep-quality questions
    string questions[10] =
    {
        "1. I get enough sleep each night.",
        "2. I fall asleep without much difficulty.",
        "3. I stay asleep throughout the night.",
        "4. I wake up feeling rested.",
        "5. I maintain a consistent sleep schedule.",
        "6. I feel alert and energetic during the day.",
        "7. I avoid staying up much later than planned.",
        "8. My sleeping environment is comfortable and relaxing.",
        "9. I am satisfied with the overall quality of my sleep.",
        "10. I feel that my sleep supports my daily activities."
    };

    // Array to store the user's 10 responses
    int responses[10];

    int totalScore = 0;
    string classification;

    // Welcome message
    cout << "==========================================" << endl;
    cout << "     VIRTUAL SLEEP QUALITY ASSISTANT      " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Welcome to the Virtual Sleep Quality Assistant!" << endl;
    cout << endl;

    cout << "This program will ask you 10 questions about" << endl;
    cout << "your sleep habits and sleep quality." << endl;

    cout << endl;

    cout << "For each question, enter:" << endl;
    cout << "1 = Rarely or Never" << endl;
    cout << "2 = Sometimes" << endl;
    cout << "3 = Often or Always" << endl;

    cout << endl;

    // -------------------------------------------------------
    // Ask all 10 questions
    // -------------------------------------------------------

    for (int i = 0; i < 10; i++)
    {
        cout << questions[i] << endl;

        cout << "1 = Rarely or Never" << endl;
        cout << "2 = Sometimes" << endl;
        cout << "3 = Often or Always" << endl;

        cout << "Your response: ";
        cin >> responses[i];

        // Validate the user's response
        while (responses[i] < 1 || responses[i] > 3)
        {
            cout << endl;
            cout << "Invalid response." << endl;
            cout << "Please enter 1, 2, or 3: ";
            cin >> responses[i];
        }

        // Add the response to the total score
        totalScore = totalScore + responses[i];

        cout << endl;
    }

    // -------------------------------------------------------
    // Display total score
    // -------------------------------------------------------

    cout << "==========================================" << endl;
    cout << "               YOUR RESULTS               " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "Your total sleep quality score is: "
         << totalScore << " out of 30." << endl;

    cout << endl;

    // -------------------------------------------------------
    // Determine classification
    // -------------------------------------------------------

    if (totalScore >= 24 && totalScore <= 30)
    {
        classification = "Level A - Good Sleep Quality";

        cout << "Classification: " << classification << endl;

        cout << endl;

        cout << "Your responses indicate that you frequently" << endl;
        cout << "practice positive sleep habits and experience" << endl;
        cout << "positive sleep quality in the areas evaluated." << endl;

        cout << endl;

        cout << "Recommendations:" << endl;
        cout << "- Continue maintaining a consistent sleep schedule." << endl;
        cout << "- Continue creating a comfortable sleep environment." << endl;
        cout << "- Continue allowing yourself enough time for sleep." << endl;
        cout << "- Maintain healthy daytime and nighttime routines." << endl;
    }

    else if (totalScore >= 17 && totalScore <= 23)
    {
        classification = "Level B - Moderate Sleep Quality";

        cout << "Classification: " << classification << endl;

        cout << endl;

        cout << "Your responses indicate a mixture of positive" << endl;
        cout << "sleep habits and areas that may benefit from" << endl;
        cout << "additional attention." << endl;

        cout << endl;

        cout << "Recommendations:" << endl;
        cout << "- Try going to bed and waking up at consistent times." << endl;
        cout << "- Create a relaxing routine before bedtime." << endl;
        cout << "- Make your sleeping environment comfortable." << endl;
        cout << "- Give yourself enough time to sleep each night." << endl;
    }

    else
    {
        classification = "Level C - Poor Sleep Quality";

        cout << "Classification: " << classification << endl;

        cout << endl;

        cout << "Your responses indicate fewer positive sleep" << endl;
        cout << "experiences in the areas explored by this survey." << endl;

        cout << endl;

        cout << "Recommendations:" << endl;
        cout << "- Work toward a consistent bedtime and wake-up time." << endl;
        cout << "- Develop a relaxing routine before going to bed." << endl;
        cout << "- Review your sleeping environment for possible improvements." << endl;
        cout << "- Consider discussing persistent sleep concerns with a" << endl;
        cout << "  qualified healthcare professional." << endl;
    }

    // -------------------------------------------------------
    // Educational disclaimer
    // -------------------------------------------------------

    cout << endl;
    cout << "==========================================" << endl;
    cout << "               DISCLAIMER                 " << endl;
    cout << "==========================================" << endl;

    cout << endl;

    cout << "This questionnaire is an educational programming" << endl;
    cout << "demonstration and is not a clinical assessment." << endl;
    cout << "The score does not diagnose a sleep disorder or" << endl;
    cout << "any other medical condition." << endl;

    cout << endl;

    cout << "If you have ongoing concerns about your sleep," << endl;
    cout << "consider speaking with a qualified healthcare" << endl;
    cout << "professional." << endl;

    cout << endl;

    cout << "Thank you for using the Virtual Sleep Quality Assistant!"
         << endl;

    return 0;
}