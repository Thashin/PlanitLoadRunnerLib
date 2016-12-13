
void lr_planit_log(char* filename, char* parameters[])
{
	long log = fopen(filename, "a");
	if(log == NULL)
	{
		perror("Error opening log.");
	}
	else
	{	
		int i = 0;
		int j = sizeof(parameters);
		for(i = 0;i<j-1;i=i+1)
		{
			fprintf(log, "%s,", parameters[i]);
		}
		fprintf(log, "%s\n", parameters[j-1]);
	}
	fclose(log);
}