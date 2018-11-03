using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "State")]
public class State : ScriptableObject {

    [TextArea(14,10)][SerializeField] string storyText;// this declares 10 to be the size and 14 to be the amount of lines before scroll
    [SerializeField] State[] nextStates;

    public string GetStateStory()
    {
        return storyText;
    }

    public State[] GetNextStates()
        {
        return nextStates;
        }

}
