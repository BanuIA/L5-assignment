#pragma once

using namespace System;

ref struct BankAccount abstract {
	BankAccount(String^ holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
	virtual String^ ToString() override;
	virtual bool CanDebit(double amount) abstract;
private:
	String^ accountHolder;
	double balance;
protected:
	String^ RoutingInstructions(double amount);
};