import { Component } from '@angular/core';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css'
})
export class DemoComponent
{
  DisplayText : string = "Marvellous Infosystem's";

  public fun()
  {
    if(this.DisplayText === "Marvellous Infosystem's")
    {
      this.DisplayText = "Education for Better Tomorrow";
    }
    else
    {
      this.DisplayText = "Marvellous Infosystem's";
    }
  }
}
