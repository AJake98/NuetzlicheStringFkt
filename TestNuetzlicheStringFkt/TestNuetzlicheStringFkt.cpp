#include "pch.h"
#include "CppUnitTest.h"
#include "../NuetzlicheStringFkt/strfunctions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestNuetzlicheStringFkt
{
	TEST_CLASS(testsuiteForFind1stOccurence)
	{
	public:
		TEST_METHOD(testForNotInString)
		{
			Assert::AreEqual(-1, find1stOccurence( "Hallo" ,'x'));
		}
		TEST_METHOD(testForSingleOccurrenceInString) 
		{
			Assert::AreEqual(1, find1stOccurence("Hallo", 'a'));
		}
		TEST_METHOD(testForEmptyString)
		{
			Assert::AreEqual(-1, find1stOccurence("", '.'));
		}
		TEST_METHOD(testForReturnOfFirstOccurrenceOnly)
		{
			Assert::AreEqual(2, find1stOccurence("Hallo", 'l'));
		}
		TEST_METHOD(testForOccurrenceIn1stPosition)
		{
			Assert::AreEqual(0, find1stOccurence("Hallo", 'H'));
		}
		TEST_METHOD(testForOccurrenceInLastPositionOnly)
		{
			Assert::AreEqual(4, find1stOccurence("Hallo", 'o'));
		}
	};
	TEST_CLASS(testsuiteForIsPartOf)
	{
		// true für kommt vor
		// false für kommt nicht vor && Empty-String
		TEST_METHOD(testForFalse)
		{
			Assert::IsFalse(isPartOf("Hallo", 'x'));
		}
		TEST_METHOD(testForTrue)
		{
			Assert::IsTrue(isPartOf("Hallo", 'a'));
		}
	};
	TEST_CLASS(testsuiteForReverse)
	{
		// gibt den String in umgekehrter Reihenfolge zurück
		TEST_METHOD(testReversedEinfachesBeispiel)
		{
			Assert::AreEqual(std::string("ollaH"), reverse("Hallo"));
		}
		TEST_METHOD(testReversedEmptyString)
		{
			Assert::AreEqual(std::string(""), reverse(""));
		}
	};
}


































