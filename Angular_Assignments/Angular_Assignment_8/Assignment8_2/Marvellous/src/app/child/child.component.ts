import { Component, EventEmitter, Output, Input } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-child',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './child.component.html',
  styleUrl: './child.component.css'
})
export class ChildComponent
{
  public Message : any;

  @Input() public ParentData : any;
  
  @Output() public Myevent = new EventEmitter();

  public SendToParent()
  {
    this.Myevent.emit(this.Message);
  }
}
