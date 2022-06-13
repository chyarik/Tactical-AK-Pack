//Core cfgVoice uses no external references to data. This is redefined in each project.
class CfgVoice
{
	access = ReadAndWrite;
	
	//Different speakers
	voices[] = {NoVoice};
	femaleVoices[] = {};
	voicePlayer = NoVoice;
  
  //Samples used to add to radio messaging.
	micOuts[] = {};
	
	//Voice played as preview in the voice options menu.
	preview = "";
  default = "NoVoice";

	class NoVoice
	{
    /// radio protocol implementation class
    protocol = RadioProtocolBase;

		variants[] = {1};	//Define variants - only one for player's voice.
		
		//There is an option (forced for demos) to use only a limited number of speakers.
		//All speakers, single speaker.
		directories[] = {"", ""};

    /// Filter - what units can use this voice
    identityTypes[] = {"Default"};
    scope=2;
    voiceType="";
	};
};

/// Classes of voices - in UI, player will select voice class, the voice itself is selected based on the voice class and identity type
class CfgVoiceTypes
{
  class NoVoice
  {
    name = "No voice"; // UI text
    voices[] = {NoVoice}; // reference to CfgVoice
    preview = "NoVoice";
    alternative = "";
  };
};