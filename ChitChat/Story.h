#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::IO;

public ref class Story {

public:
	int SID;
	array<Byte>^ Img;
	String^ Text;
	String^ TimeDate;
	int CID;
}; 
