void lr_start_planit_transaction(char* transactionName)
{
	lr_start_transaction(transactionName);
	lr_vuser_status_message("%s|%s|%s|%s",lr_eval_string("{Username}"),lr_eval_string("{Iteration}"),lr_get_vuser_ip(),transactionName);
}