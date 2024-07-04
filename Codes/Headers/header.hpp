ofstream getOutputFile(string fileName="Logs/log.txt")
{
    ofstream outputFile;
    outputFile.open(fileName, ios::app);
    return outputFile;
}

void outputLog(string message)
{
    ofstream outputFile = getOutputFile();
    outputFile << message << endl;
    outputFile.close();
}