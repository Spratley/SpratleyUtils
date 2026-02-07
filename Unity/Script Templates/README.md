# Unity Script Templates
Unity's default New MonoBehaviour script wasn't detailed enough for my taste, so I modified it to add separate comment headers to help block-out my scripts and keep myself organized when working with C#. I liked using it so much that I extended my script templates to include a basic class with the same layout that doesn't inherit from MonoBehaviour, as well as a ScriptableObject class that I call a DataScript.

To use, just copy the files into your Unity Editor install directory under the path: "Editor\Data\Resources\ScriptTemplates". 

Alternatively, if you only want to install them for one specific project (Or if you want to include them in a project repo), you can instead put them in your project assets directory:
"Assets\ScriptTemplates".

Once in place, New Behavior Script should now generate a script with my template, and New Class Script and New Data Script should also be present in the Right-Click context menu of the asset browser.

## Example
```cs
public class MyClass : MonoBehaviour
{
    // Data
    [SerializeField]
    private float _moveSpeed;
    private float _jumpHeight;
    private int _maxHealth;

    // Public Members
    public GameObject OtherObject;
    
    // Private Members
    private Vector3 _momentum;
    private bool _isGrounded;
    private int _health;

    // Unity Standard Methods
    private void Start()
    {
        // Do stuff...
    }

    // Public Methods
    public float GetHealthRatio()
    {
        return (float)_health / (float)_maxHealth;
    }

    // Private Methods
    private void ProcessMovement()
    {
        // Do more stuff..
    }
}
```

## Organization
The script template is generally broken down into the following categories, and I recommend that you follow the same guidelines I use when scripting to help keep your code as tidy as C# will let you. Due to Unity preferring to keep all method definitions inline in the class, I always keep my member values above my methods so that they don't have to be scrolled down to find.

<i>Note: I excluded the Protected section from my template, since I find that it's ignored more often than it's used (Especially in C#). Instead of deleting the comment from every new file I make, I opted to ADD the section whenever I needed it. In the rare case I do, it is always between the Public and Private sections of both the members and methods of a class.</i>

### Data
The Data section should be reserved for runtime constant values exposed directly to the Unity Editor, used for gameplay tuning purposes. Data members should influence the behavior of an object, all be private, and exposed using the [SerializeField] attribute. I often group data members into a single ScriptableObject file, so that each instance of a prefab in my scene doesn't need to have the same values stored.

### Public Members
Thanks to the existing Data section, our public members list is no longer polluted by object configuration values and can be reserved for runtime read-write values that are exposed on the class. Frequently, I use the Public Members section when my class depends on a reference to a specific object that can't be evaluated in the Awake() or Start() methods.

### Private Members
Private members are for any read-write value that does not need to be accessed from outside the class. This section is fairly self-explanatory, if you've done object oriented programming before, you know why you need private members.

### Unity Standard Methods
The first block of Methods I reserve for any Unity Standard methods that can be implemented by a MonoBehaviour class (e.g. Start(), Awake(), OnEnter(), etc). This is to keep my implementation clearly segregated between the portions of my script that interface directly with the Unity engine, and the parts that need to be talked to by me.

### Public Methods
Public Methods are for any method that could be called by an external class. Remember good public API architecture when creating methods in this section. They should be self-documenting and easy to use.

### Private Methods
Finally, Private Methods are the catch-all for any other method in the class. When working in C# it's very easy to default to making everything public, so as a rule of thumb I do the opposite and make every method private. Only when the need to call a method from outside the class arises do I promote it to a public method, or create a public accessor as a middle-man.