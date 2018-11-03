using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;//initializing user inter face properties for unity, text in this case

public class MeteorStikesGame : MonoBehaviour {
    [SerializeField] Text textComponent;
    [SerializeField] State startState;


    State state;
	// Use this for initialization
	void Start () {

        state = startState;
        textComponent.text = state.GetStateStory();


	}
	
	// Update is called once per frame
	void Update() {

        ManageState();    
    }

    private void ManageState() 
    {
        State[] nextStates= state.GetNextStates();
        if(Input.GetKeyDown(KeyCode.Alpha1))
        {
            state = nextStates[0];
        }
        else if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            state = nextStates[1];
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            state = nextStates[2];
        }
            textComponent.text = state.GetStateStory();
    }
    
}
