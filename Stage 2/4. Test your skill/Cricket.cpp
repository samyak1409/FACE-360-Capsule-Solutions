/*
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.
INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers. First input corresponds to the total number of balls. Second input corresponds to the total number of runs. Third input corresponds to the number of runs scored. Fourth input corresponds to the number of balls bowled. First output corresponds to the total number of overs. Second output corresponds to the total number of overs finished. Third output corresponds to the current run rate. Fourth output corresponds to total run rate.

Overs: 50 Overs finished: 7.3 Current Run rate: 10.7 Total Run rate: 7.5 Eligible to Win

SAMPLE INPUT:

300

375

78

45

SAMPLE OUTPUT:

50

7.3

10.7

7.5

Eligible to Win
*/

#include<iostream>
using namespace std;

int main()
{
  int total_balls, target, scored, balls_bowled;
  cin >> total_balls >> target >> scored >> balls_bowled;

  float total_overs = total_balls/6;
  float overs_bowled = balls_bowled/6 + (balls_bowled%6)*.1;
  float cur_run_rate = scored/overs_bowled;
  float req_run_rate = target/total_overs;
  cout << total_overs << endl;
  cout << overs_bowled << endl;
  printf("%.1f \n", cur_run_rate);
  printf("%.1f \n", req_run_rate);

  cout << ((cur_run_rate<req_run_rate)?("Not "):("")) << "Eligible to Win";
}
