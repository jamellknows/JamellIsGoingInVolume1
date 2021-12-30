// Java implementation of above design for Cricket App. 
// The problems with this design are discussed below. 

// A class that gets information from a stafium and notifes 
// display elements, CurrentScoreDisplay and AverageScoreDisplay


class CricketData 
{
    int runs, wickets;
    float overs;
    CurrentScoreDisplay currentScoreDisplay;
    AverageScoreDisplay averageScoreDisplay;

    public CricketData(CurrentScoreDisplay currentScoreDisplay, AverageScoreDisplay averageScoreDisplay)
    {
        this.currentScoreDisplay = currentScoreDisplay;
        this.averageScoreDisplay = averageScoreDisplay;
    }

    private int getLatestRuns()
    {
        return 90; //return 90 for simplicity
    }

    private int getLatestWickets()
    {
        return 2; // for simplicity would connect to an api
    }

    private float getLatestOvers()
    {
        return (float)10.2;
    }

    public void dataChanged()
    {
        runs = getLatestRuns();
        wickets = getLatestWickets();
        overs = getLatestOvers();

        currentScoreDisplay.update(runs, wickets, overs);
        averageScoreDisplay.update(runs, wickets, overs);

    }
}


class AverageScoreDisplay
{
    private float runRate;
    private int predictedScore;

    public void update(int runs, int wickets, float overs)
    {
        this.runRate = (float)runs/overs;
        this.predictedScore = (int) (this.runRate * 50);
        display();
    }

    public void display()
    {
        System.out.print("\n Average Score Display: \n" + "Run Rate: " + runRate + "\n Predicted Score: " + predictedScore)
    }
}

class CurrentScoreDisplay
{
    private int runs, wickets;
    private float overs;

    public void update(int runs, int wickets, float overs)
    {
        this.runs = runs;
        this.wickets = wickets;
        this.overs = overs;
        display();
    }

    public void display()
    {
        System.out.print("\n Current Score Display: \n" + "Runs: " + runs + "\n Wickets" + wickets + "\n Overs" + overs);
    }
}

class Main
{
    public static void main(String args[])
    {
        AverageScoreDisplay averageScoreDisplay = new AverageScoreDisplay();
        CurrentScoreDisplay currentScoreDisplay = new CurrentScoreDisplay();

        CricketData cricketData = new CricketData(currentScoreDisplay, averageScoreDisplay);

        cricketData.dataChanged();
    }
}